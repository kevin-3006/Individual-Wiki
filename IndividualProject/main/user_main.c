/* Pulse Oximeter

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"

#include "driver/gpio.h"
#include "driver/i2c.h"

#include "esp_log.h"
#include "esp_system.h"
#include "esp_timer.h"
#include "esp_sleep.h"

static const char *TAG = "Pulse Oximeter";

#define GPIO_INPUT_IO_0     2                                /*!< gpio pin selected as input */
#define GPIO_INPUT_PIN_SEL  (1ULL<<GPIO_INPUT_IO_0)          /*!< gpio bit mask */

#define I2C_EXAMPLE_MASTER_SCL_IO           0                /*!< gpio number for I2C master clock */
#define I2C_EXAMPLE_MASTER_SDA_IO           2                /*!< gpio number for I2C master data  */
#define I2C_EXAMPLE_MASTER_NUM              I2C_NUM_0        /*!< I2C port number for master dev */
#define I2C_EXAMPLE_MASTER_TX_BUF_DISABLE   0                /*!< I2C master do not need buffer */
#define I2C_EXAMPLE_MASTER_RX_BUF_DISABLE   0                /*!< I2C master do not need buffer */

#define ADS1115_GENERAL_CALL_ADDR           0x00             /*!< general call address for ADS1115 */
#define ADS1115_SLAVE_ADDR                  0x90             /*!< slave address for ADS1115 */
#define WRITE_BIT                           I2C_MASTER_WRITE /*!< I2C master write */
#define READ_BIT                            I2C_MASTER_READ  /*!< I2C master read */
#define ACK_CHECK_EN                        0x1              /*!< I2C master will check ack from slave*/
#define ACK_CHECK_DIS                       0x0              /*!< I2C master will not check ack from slave */
#define ACK_VAL                             0x0              /*!< I2C ack value */
#define NACK_VAL                            0x1              /*!< I2C nack value */
#define LAST_NACK_VAL                       0x2              /*!< I2C last_nack value */

/**
 * Define the ADS1115 register address taken from the Address Pointer Register:
 */ 
#define CONVERSION_REG  0x00        /*!< Address for Conversion Register which contains result of last conversion */
#define CONFIG_REG      0x01        /*!< Address for Configuration Register which configures the ADS1115 */
#define LO_THRESH_REG   0x02        /*!< Address for Lower Threshold Register which contains lower threshold values used by the comparator */
#define HI_THRESH_REG   0x03        /*!< Address for Higher Threshold Register which contains higher threshold values used by the comparator */

//Initalize counter for the number of peaks
int count = 0;
//Stores number of seconds elasped
int seconds = 0;
//Stores ADS1115 sensor readings
int sensor_readings[100];

//Task Handle for po_init task
TaskHandle_t Initial_Task = NULL;

//Create semaphore handler for the mutex to manage the GP2 pin
SemaphoreHandle_t xMutex = NULL;

//Used to put the processor to sleep and achieve power savings levels mentioned in the power budget
void vApplicationIdleHook( void )
{
	//Puts the ESP into light sleep so it draws less current
	esp_light_sleep_start();
}

//ISR used to determine the number of peaks
static void gpio_isr_handler(void *arg)
{
    //Increment count
    count++;
}

//Configures the GPIO Pin as an input and sets up the ISR
void gpio_init( void )
{
    gpio_config_t io_conf;

    //Interrupt of falling edge
    io_conf.intr_type = GPIO_INTR_NEGEDGE;
    //Bit mask of the pins, use GP0 here
    io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;
    //Set as input mode
    io_conf.mode = GPIO_MODE_INPUT;
    //Enable pull-up mode
    io_conf.pull_up_en = 1;
    gpio_config(&io_conf);

    //Install gpio isr service
    gpio_install_isr_service(0);
    //Hook isr handler for specific gpio pin
    gpio_isr_handler_add(GPIO_INPUT_IO_0, gpio_isr_handler, (void *) GPIO_INPUT_IO_0);
}

//Configures ESP for I2C communication
static esp_err_t esp_i2c_init()
{
    int i2c_master_port = I2C_EXAMPLE_MASTER_NUM;
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = I2C_EXAMPLE_MASTER_SDA_IO;
    conf.sda_pullup_en = 1;
    conf.scl_io_num = I2C_EXAMPLE_MASTER_SCL_IO;
    conf.scl_pullup_en = 1;
    conf.clk_stretch_tick = 300; // 300 ticks, Clock stretch is about 210us, you can make changes according to the actual situation.
    ESP_ERROR_CHECK(i2c_driver_install(i2c_master_port, conf.mode));
    ESP_ERROR_CHECK(i2c_param_config(i2c_master_port, &conf));
    return ESP_OK;
}

/**
 * @brief Writes to the ADS1115 using the following timing requirements
 *
 * 1. send data
 * ______________________________________________________________________________________________________________________________
 * | start | slave_addr + wr_bit + ack | write reg_address + ack | write MSB data byte + ack | write LSB data byte + ack | stop |
 * --------|---------------------------|-------------------------|---------------------------|---------------------------|------|
 *
 * @param i2c_num I2C port number
 * @param reg_address register address
 * @param msb_data msb data to send
 * @param lsb_data lsb data to send
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_ARG Parameter error
 *     - ESP_FAIL Sending command error, slave doesn't ACK the transfer.
 *     - ESP_ERR_INVALID_STATE I2C driver not installed or not in master mode.
 *     - ESP_ERR_TIMEOUT Operation timeout because the bus is busy.
 */
static esp_err_t ads1115_write(i2c_port_t i2c_num, uint8_t reg_address, uint8_t *msb_data, uint8_t *lsb_data)
{
    int ret;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, ADS1115_SLAVE_ADDR | WRITE_BIT, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, reg_address, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, *msb_data, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, *lsb_data, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    ret = i2c_master_cmd_begin(i2c_num, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);

    return ret;
}

/**
 * @brief Reads from the ADS1115 using the following timing requirements
 *
 * 1. send reg address
 * ______________________________________________________________________
 * | start | slave_addr + wr_bit + ack | write reg_address + ack | stop |
 * --------|---------------------------|-------------------------|------|
 *
 * 2. read data
 * ____________________________________________________________________________________________________________________
 * | start | slave_addr + rd_bit + ack | read data byte 1 + ack(by master) | read data byte 2 + ack(by master) | stop |
 * --------|---------------------------|-----------------------------------|-----------------------------------|------|
 *
 * @param i2c_num I2C port number
 * @param reg_address register address
 * @param data_byte_1 first data byte to read
 * @param data_byte_2 second data byte to read
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_ARG Parameter error
 *     - ESP_FAIL Sending command error, slave doesn't ACK the transfer.
 *     - ESP_ERR_INVALID_STATE I2C driver not installed or not in master mode.
 *     - ESP_ERR_TIMEOUT Operation timeout because the bus is busy.
 */
static esp_err_t ads1115_read(i2c_port_t i2c_num, uint8_t reg_address, uint8_t *data_byte_1, uint8_t *data_byte_2)
{
    int ret;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, ADS1115_SLAVE_ADDR | WRITE_BIT, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, reg_address, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    ret = i2c_master_cmd_begin(i2c_num, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);

    if (ret != ESP_OK) {
        return ret;
    }

    cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, ADS1115_SLAVE_ADDR | READ_BIT, ACK_CHECK_EN);
    i2c_master_read_byte(cmd, data_byte_1, ACK_VAL);
    i2c_master_read_byte(cmd, data_byte_2, ACK_VAL);
    i2c_master_stop(cmd);
    ret = i2c_master_cmd_begin(i2c_num, cmd, 1000 / portTICK_RATE_MS);
    i2c_cmd_link_delete(cmd);

    return ret;
}

/**
 * @brief Resets ADS1115
 *
 * 1. send data
 * _____________________________________________________________________________________________
 * | start | general_call_addr + ack | write first byte + ack | write second byte + ack | stop |
 * --------|-------------------------|------------------------|-------------------------|------|
 */
static esp_err_t ads1115_reset()
{
    uint8_t first_byte = 0x00;      // First data byte to send
    uint8_t second_byte = 0x06;     // Second data byte to send
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, ADS1115_GENERAL_CALL_ADDR, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, first_byte, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, second_byte, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    i2c_cmd_link_delete(cmd);
    return ESP_OK;
}

//Resets and Configures the ADS1115 for use with this project
static esp_err_t ads1115_init(i2c_port_t i2c_num)
{
    uint8_t config_msb_data;
    uint8_t config_lsb_data;
    vTaskDelay(100 / portTICK_RATE_MS);
    esp_i2c_init();
    ads1115_reset();     // Reset ADS1115
    config_msb_data = 0xC2;    // Configure ADS1115 (1100 0010) 
    config_lsb_data = 0x83;    // Configure ADS1115 (1000 0011)
    ESP_ERROR_CHECK(ads1115_write(i2c_num, CONFIG_REG, &config_msb_data, &config_lsb_data));
    return ESP_OK;
}

//Calculates the SpO2 level of a person
int spo2_calc( int sensor_readings[] )
{
    int spo2 = 0;
    return spo2;
}

//Calculates the heart rate of a person
int heart_rate_calc( int count, int seconds )
{
    int heart_rate = 0;
    return heart_rate;
}

//Initializes the different components of the pulse oximeter
static void po_init(void *arg)
{
    //Initialize GPIO
    gpio_init();
    //Initialize ESP I2C Communication
    esp_i2c_init();
    //Initialize ADS1115
    ads1115_init(I2C_EXAMPLE_MASTER_NUM);
    //Delete Task
    vTaskDelete(Initial_Task);
}

//Logs the readings from the ADS1115 conversions of the IR sensor
static void sensor_read(void *arg)
{
    
}

//Display the calculated SpO2 and Heart Rate Readings
static void display_readings(void *arg)
{
    //Acquire heart rate reading
    int heart_rate = heart_rate_calc(count, seconds);
    //Acquire SpO2 reading
    int spo2 = spo2_calc(sensor_readings);
    //Output readings to serial monitor
	ESP_LOGI(TAG, "SpO2 Level: %d %%, Heart Rate: %d bpm\n", spo2, heart_rate);
}

//Checks if there is a finger between the LEDs and the IR sensor
static void check_finger(void *arg)
{
    
}

void app_main(void)
{
    //Create mutex to manage the GP2 pin 
	xMutex = xSemaphoreCreateMutex();
    
    //Verify mutex has been created successfuly before creating tasks to use the mutex
    if( xMutex != NULL) 
    {
        //Task Creation based on design
        xTaskCreate(po_init, "po_init", 2048, NULL, 7, &Initial_Task);
        xTaskCreate(sensor_read, "sensor_read", 2048, NULL, 10, NULL);
        xTaskCreate(display_readings, "display_readings", 2048, NULL, 5, NULL);
        xTaskCreate(check_finger, "check_finger", 2048, NULL, 12, NULL);
    }

    for( ;; ){
        //Prevent WDT from triggering
		vTaskDelay(pdMS_TO_TICKS(10));
    }
}



/* I2C example

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
#include "freertos/queue.h"

#include "esp_log.h"
#include "esp_system.h"
#include "esp_err.h"

#include "driver/i2c.h"


static const char *TAG = "main";

/**
 * TEST CODE BRIEF
 *
 * This example will show you how to use I2C module by running two tasks on i2c bus:
 *
 * - read external i2c sensor, here we use a ADS1115 sensor for instance.
 * - Use one I2C port(master mode) to read or write the other I2C port(slave mode) on one ESP8266 chip.
 *
 * Pin assignment:
 *
 * - master:
 *    GP2 is assigned as the data signal of i2c master port
 *    GP0 is assigned as the clock signal of i2c master port
 *
 * Connection:
 *
 * - connect sda/scl of sensor with GP2/GP0
 * - no need to add external pull-up resistors, driver will enable internal pull-up resistors.
 *
 * Test items:
 *
 * - read the sensor data, if connected.
 */

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

/**
 * @brief i2c master initialization
 */
static esp_err_t i2c_example_master_init()
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
 * @brief test code to reset ADS1115
 *
 * 1. send data
 * _____________________________________________________________________________________________
 * | start | general_call_addr + ack | write first byte + ack | write second byte + ack | stop |
 * --------|-------------------------|------------------------|-------------------------|------|
 */
static esp_err_t i2c_example_master_ads1115_reset()
{
    uint8_t first_byte = 0x00;      // first data byte to send
    uint8_t second_byte = 0x06;     // second data byte to send
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, ADS1115_GENERAL_CALL_ADDR, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, first_byte, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, second_byte, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    i2c_cmd_link_delete(cmd);
    return ESP_OK;
}

/**
 * @brief test code to write ADS1115
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
static esp_err_t i2c_example_master_ads1115_write(i2c_port_t i2c_num, uint8_t reg_address, uint8_t *msb_data, uint8_t *lsb_data)
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
 * @brief test code to read ADS1115
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
static esp_err_t i2c_example_master_ads1115_read(i2c_port_t i2c_num, uint8_t reg_address, uint8_t *data_byte_1, uint8_t *data_byte_2)
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

static esp_err_t i2c_example_master_ads1115_init(i2c_port_t i2c_num)
{
    uint8_t config_msb_data;
    uint8_t config_lsb_data;
    vTaskDelay(100 / portTICK_RATE_MS);
    i2c_example_master_init();
    i2c_example_master_ads1115_reset();     // reset ADS1115
    config_msb_data = 0xC4;    // configure ADS1115
    config_lsb_data = 0x83;    // configure ADS1115
    ESP_ERROR_CHECK(i2c_example_master_ads1115_write(i2c_num, CONFIG_REG, &config_msb_data, &config_lsb_data));
    return ESP_OK;
}

static void i2c_task_example(void *arg)
{
    uint8_t data_byte_1;
    uint8_t data_byte_2;
    int ret;
    i2c_example_master_ads1115_init(I2C_EXAMPLE_MASTER_NUM);

    while (1) {

        ret = i2c_example_master_ads1115_read(I2C_EXAMPLE_MASTER_NUM, CONVERSION_REG, &data_byte_1, &data_byte_2);

        if (ret == ESP_OK) {
            ESP_LOGI(TAG, "*******************\n");
            ESP_LOGI(TAG, "ADS1115\n");
            ESP_LOGI(TAG, "Slave Address: 0x%02x\n", ADS1115_SLAVE_ADDR);
            ESP_LOGI(TAG, "ADC_data: %d %d\n", (uint8_t)(data_byte_1), (uint8_t)(data_byte_2));
        } else {
            ESP_LOGE(TAG, "No ack, ADS1115 not connected...skip...\n");
        }

        vTaskDelay(1000 / portTICK_RATE_MS);
    }

    i2c_driver_delete(I2C_EXAMPLE_MASTER_NUM);
}

void app_main(void)
{
    //start i2c task
    xTaskCreate(i2c_task_example, "i2c_task_example", 2048, NULL, 10, NULL);
}
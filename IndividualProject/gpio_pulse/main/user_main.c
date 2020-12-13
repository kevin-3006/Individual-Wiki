/* gpio example

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

#include "driver/gpio.h"

#include "esp_log.h"
#include "esp_system.h"

static const char *TAG = "main";

/**
 * Brief:
 * This test code shows how to configure gpio and how to use gpio interrupt.
 *
 * GPIO status:
 * GP2: Output
 * GP0: Input, pulled up, interrupt from falling edge
 *
 * Test:
 * Connect GP2 with GP0 
 * Generate pulses on GP2, that triggers interrupt on GP0
 *
 */

#define GPIO_OUTPUT_IO_0    2
#define GPIO_OUTPUT_PIN_SEL  (1ULL<<GPIO_OUTPUT_IO_0)
#define GPIO_INPUT_IO_0     0
#define GPIO_INPUT_PIN_SEL  (1ULL<<GPIO_INPUT_IO_0)

SemaphoreHandle_t xBinarySemaphore = NULL;

static void gpio_isr_handler(void *arg)
{
    //Initialize the xHigherPriorityTaskWoken parameter to pdFALSE
    BaseType_t xHigherPriorityTaskWoken;
    xHigherPriorityTaskWoken = pdFALSE;

    //'Give' the semaphore to unblock the task (gpio_task_example)
    xSemaphoreGiveFromISR(xBinarySemaphore, &xHigherPriorityTaskWoken);
}

static void gpio_task_example(void *arg)
{
    //BinarySemaphore cannot be used before a call to xSemaphoreCreateBinary()
    //This is a macro so pass the variable in directly
    xBinarySemaphore = xSemaphoreCreateBinary();

    //Check the semaphore was created successfully
    if ( xBinarySemaphore != NULL ) {
        //Initalize io_num to the input GPIO pin (GP0)
        int io_num = 0;

        //Task is implemented within an infinite loop
        for (;;) {
            //Use the semaphore to wait for the event since the task blocks indefinitely 
            //This will only return once the semaphore has been successfully obtained
            if ( xSemaphoreTake( xBinarySemaphore, portMAX_DELAY ) == pdTRUE ) {
                //Log the GPIO pin interrupt to console
                ESP_LOGI(TAG, "GPIO[%d] intr, val: %d\n", io_num, gpio_get_level(io_num));
            }      
        }
    }
}

void app_main(void)
{
    gpio_config_t io_conf;
    //Disable interrupt
    io_conf.intr_type = GPIO_INTR_DISABLE;
    //Set as output mode
    io_conf.mode = GPIO_MODE_OUTPUT;
    //Bit mask of the pins that you want to set,e.g. GP2
    io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL;
    //Disable pull-down mode
    io_conf.pull_down_en = 0;
    //Disable pull-up mode
    io_conf.pull_up_en = 0;
    //Configure GPIO with the given settings
    gpio_config(&io_conf);

    //Interrupt of falling edge
    io_conf.intr_type = GPIO_INTR_NEGEDGE;
    //Bit mask of the pins, use GP0 here
    io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;
    //Set as input mode
    io_conf.mode = GPIO_MODE_INPUT;
    //Enable pull-up mode
    io_conf.pull_up_en = 1;
    gpio_config(&io_conf);

    //Start gpio task
    xTaskCreate(gpio_task_example, "gpio_task_example", 2048, NULL, 10, NULL);

    //Install gpio isr service
    gpio_install_isr_service(0);
    //Hook isr handler for specific gpio pin
    gpio_isr_handler_add(GPIO_INPUT_IO_0, gpio_isr_handler, (void *) GPIO_INPUT_IO_0);

    int cnt = 0;

    while (1) {
        ESP_LOGI(TAG, "cnt: %d\n", cnt++);
        vTaskDelay(2000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_OUTPUT_IO_0, cnt % 2);
    }
}



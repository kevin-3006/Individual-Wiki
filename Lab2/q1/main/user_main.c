/* Example Application

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

#include "esp_log.h"
#include "esp_system.h"
#include "esp_timer.h"

static const char *TAG = "main";

#define GPIO_OUTPUT_IO_0    2                               //GPIO pin number to be used in the example application
#define GPIO_OUTPUT_PIN_SEL  (1ULL<<GPIO_OUTPUT_IO_0)       //Bit mask for gpio pin
#define ACTIVE_DELAY_US     500000                          //Number of seconds tasks are set to active delay for (units in microseconds)

//Create semaphore handler for the mutex
SemaphoreHandle_t xMutex = NULL;

void gpio_pin_on(void *arg) {
	for( ;; ) {
        //Checks whether task has access to the mutex
        //Waits 10 ticks to gain access to the mutex
		if (xSemaphoreTake(xMutex, (TickType_t)10)==pdTRUE)
		{
            //Sets the gpio pin to high (1) which turns it on
			gpio_set_level(GPIO_OUTPUT_IO_0, 1);

            //Acquire system time from the esp
			int64_t sys_time = esp_timer_get_time();
            //Actively wait until the elasped time is greater than the active delay time specified in ACTIVE_DELAY_US
			while ((sys_time+ACTIVE_DELAY_US) > esp_timer_get_time()){}

            //Task delay for 1 second
			vTaskDelay(pdMS_TO_TICKS(1000));

            //Give the mutex so another task can access the resource
			xSemaphoreGive(xMutex);
		}
        //Alot time to allow task to give back mutex and put task in block state
		vTaskDelay(pdMS_TO_TICKS(100));
	}
}

void gpio_pin_off(void *arg) {
	for( ;; ) {
        //Checks whether task has access to the mutex
        //Waits 10 ticks to gain access to the mutex
		if (xSemaphoreTake(xMutex, (TickType_t)10) == pdTRUE)
		{
            //Sets the gpio pin to low (0) which turns it off
			gpio_set_level(GPIO_OUTPUT_IO_0, 0);

            //Acquire system time from the esp
			int64_t sys_time = esp_timer_get_time();
            //Actively wait until the elasped time is greater than the active delay time specified in ACTIVE_DELAY_US
			while ((sys_time+ACTIVE_DELAY_US) > esp_timer_get_time()){}

            //Task delay for 1 second
			vTaskDelay(pdMS_TO_TICKS(1000));

            //Give the mutex so another task can access the resource
			xSemaphoreGive(xMutex);
		}
        //Alot time to allow task to give back mutex and put task in block state
		vTaskDelay(pdMS_TO_TICKS(100));
	}
}

void gpio_status_msg(void *arg) {
	for( ;; ){
        //Output gpio status message stating the level of the gpio pin (1 or 0)
		ESP_LOGI(TAG, "GPIO[%d], GPIO Level: %d\n", GPIO_OUTPUT_IO_0, gpio_get_level(GPIO_OUTPUT_IO_0));

        //Task delay for 1 second
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}

void app_main(void)
{
    //GPIO CONFIGURATION
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

    //TASK AND MUTEX CREATION
    //Create task for status message
    xTaskCreate(gpio_status_msg, "task1", 2048, NULL, 10, NULL);

    //Create mutex to manage the GP2 pin 
	xMutex = xSemaphoreCreateMutex();
    
    //Verify mutex has been created successfuly before creating tasks to use the mutex
    if( xMutex != NULL) 
    {
        //Create task to turn the gpio pin on
        xTaskCreate(gpio_pin_on, "task2", 2048, NULL, 9, NULL);
        //Create task to turn the gpio pin off
        xTaskCreate(gpio_pin_off, "task3", 2048, NULL, 8, NULL);
    }

	for( ;; ){
        //Prevent WDT from triggering
		vTaskDelay(pdMS_TO_TICKS(10));
    } 
}
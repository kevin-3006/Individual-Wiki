/* Hello World Example Unit 1

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

#include "esp_log.h"
#include "esp_system.h"
#include "esp_err.h"
#include "esp_spi_flash.h"

//static const char *TAG = "Unit 1";

void unit1_test(char value[])
{
    // Print value
    printf("%s\n", value);

    // Print Chip Information
    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    printf("This is ESP8266 chip with %d CPU cores, WiFi, ",
            chip_info.cores);

    printf("silicon revision %d, ", chip_info.revision);

    printf("%dMB %s flash\n\n", spi_flash_get_chip_size() / (1024 * 1024),
            (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");
}

void app_main()
{   
    // Test Case 1: tests to see what happens if nothing is set to print to the screen
    char TC1[] = "";
    unit1_test(TC1);

    // Test Case 2: tests to see what happens if characters are set to print to the screen
    //char TC2[] = "Hello World";
    //unit1_test(TC2);

    // Test Case 3: tests to see what happens if alphanumeric and special characters are set to print to the screen
    //char TC3[] = "Kevin Sankar - 816013669 !!!";
    //unit1_test(TC3);

    fflush(stdout);
    
    for( ;; );
}

/* Hello World Example Verification

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

static const char *TAG = "Verification";

static void hello_world(char value[], int n)
{
    // Print value
    printf("%s\n", value);

    // Print Chip Information
    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    printf("This is ESP8266 chip with %d CPU cores, WiFi, ",
            chip_info.cores);

    printf("silicon revision %d, ", chip_info.revision);

    printf("%dMB %s flash\n", spi_flash_get_chip_size() / (1024 * 1024),
            (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");
    
    for (int i = n; i >= 0; i--) {
        ESP_LOGI(TAG, "Restarting in %d seconds...", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    ESP_LOGI(TAG, "Restarting now.\n");
}

void app_main()
{   
    // Verification Test Case 1: tests to see if it prints name and ID number to the screen and restart after 9 seconds
    char TC1[] = "Kevin Sankar - 816013669 !!!";
    int n = 9;
    hello_world(TC1, n);

    fflush(stdout);
    esp_restart();
}

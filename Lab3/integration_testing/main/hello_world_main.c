/* Hello World Example Integrated Units 1 and 2

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

static const char *TAG = "Integrated Units 1 and 2: TC1";

void integrated_units_test(char value[], int n)
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
    int n;

    // Test Case 1: tests to see what happens if nothing is set to print to the screen and a typical countdown time is used
    char TC1[] = "";
    n = 10;
    integrated_units_test(TC1, n);

    // Test Case 2: tests to see what happens if characters are set to print to the screen and a typical countdown time is used
    //char TC2[] = "Hello World";
    //n = 10;
    //integrated_units_test(TC2, n);

    // Test Case 3: tests to see what happens if nothing is set to print to the screen and a zero countdown time is used
    //char TC3[] = "";
    //n = 0;
    //integrated_units_test(TC3, n);

    // Test Case 4: tests to see what happens if characters are set to print to the screen and a zero countdown time is used
    //char TC4[] = "Hello World";
    //n = 0;
    //integrated_units_test(TC4, n);

    // Test Case 5: tests to see what happens if nothing is set to print to the screen and a negative countdown time is used
    //char TC5[] = "";
    //n = -10;
    //integrated_units_test(TC5, n);

    // Test Case 6: tests to see what happens if characters are set to print to the screen and a negative countdown time is used
    //char TC6[] = "Hello World";
    //n = -10;
    //integrated_units_test(TC6, n);

    fflush(stdout);
    esp_restart();
}

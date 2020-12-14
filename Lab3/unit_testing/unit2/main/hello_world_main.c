/* Hello World Example Unit 2

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

static const char *TAG = "Unit 2 TC4";

void unit2_test(int n)
{
    for (int i = n; i >= 0; i--) {
        ESP_LOGI(TAG, "Restarting in %d seconds...\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    ESP_LOGI(TAG, "Restarting now.\n");
}

void app_main()
{
    int n;

    // Test Case 1: tests to see what happens if a large number is used 
    //n = 100;
    //unit2_test(n);

    // Test Case 2: tests to see what happens if a typical number is used 
    //n = 10;
    //unit2_test(n);

    // Test Case 3: tests to see what happens if the number is zero
    //n = 0;
    //unit2_test(n);

    // Test Case 4: tests to see what happens if the number is negative
    n = -10;
    unit2_test(n);

    fflush(stdout);
    esp_restart();
}

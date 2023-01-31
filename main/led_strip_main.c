/* RMT example -- RGB LED Strip

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "rmt_uart.h"
// rmt_uart_config_t TXu;
static const char *TAG = "example";
void app_main(void)
{
    ESP_LOGI(TAG, "Hello");
    //    rmt_uart_config_t *uart;
    rmt_uart_config_t uart = {
        .baud_rate = 100000,
        .mode = RMT_UART_MODE_TX_ONLY,
        .data_bits = RMT_UART_DATA_9_BITS,
        .parity = RMT_UART_PARITY_DISABLE,
        .stop_bits = RMT_UART_STOP_BITS_1,
        .tx_io_num = 19,
        .rx_io_num = 16,
        .buffer_size = 64,
    };
    // uart->baud_rate = 1000;
    // uart.baud_rate = 1000;

    rmt_uart_init(RMT_UART_NUM_0, *uart);

    while (true)
    {
    }
}

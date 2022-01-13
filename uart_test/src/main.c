#include "uart.h"
#include "util.h"


void main(void)
{
    uint8_t byte = 0x30;

    sys_init();
    uart_init();

    while(true)
    {
        uart_tx(byte++);

        if(byte == 0x3F)
        {
            uart_tx('\r');
            uart_tx('\n');
            byte = 0x30;
        }
    }
}
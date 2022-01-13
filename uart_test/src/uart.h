#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/usart.h>


#ifndef UART_H
#define UART_H

void uart_init(void);

void uart_tx(uint8_t byte);

#endif
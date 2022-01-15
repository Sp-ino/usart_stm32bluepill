/*
 * USB bulk transfer example
 * 
 * Copyright (c) 2022 Valerio Spinogatti
 * Licensed under GNU license
 * 
 * uart.h
 */

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/usart.h>


#ifndef UART_H
#define UART_H

//Initialize uart
void uart_init(void);

//Wrapper for uart_send_blocking
void uart_tx(uint8_t byte);

#endif
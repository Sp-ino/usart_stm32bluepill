/*
 * USB bulk transfer example
 * 
 * Copyright (c) 2022 Valerio Spinogatti
 * Licensed under GNU license
 * 
 * uart.c
 */

#include "uart.h"


void uart_init(void)
{
    rcc_periph_clock_enable(RCC_USART1);

    gpio_set_mode(GPIOA, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_ALTFN_PUSHPULL, GPIO_USART1_TX);

    usart_set_baudrate(USART1, 38400);
    usart_set_databits(USART1, 8);
    usart_set_stopbits(USART1, USART_STOPBITS_1);
    usart_set_mode(USART1, USART_MODE_TX);
    usart_set_parity(USART1, USART_PARITY_NONE);
    usart_set_flow_control(USART1, USART_FLOWCONTROL_NONE);
    usart_enable(USART1);
}

void uart_tx(uint8_t byte)
{
    usart_send_blocking(USART1, byte);
}
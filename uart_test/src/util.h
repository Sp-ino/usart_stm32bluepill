/*
 * USB bulk transfer example
 * 
 * Copyright (c) 2022 Valerio Spinogatti
 * Licensed under GNU license
 * 
 * util.h
 */

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>


#ifndef UTIL_H
#define UTIL_H

/*Blink the LED connected to PC13*/
void led_blink(void);

/*Initialize system*/
void sys_init(void);

#endif
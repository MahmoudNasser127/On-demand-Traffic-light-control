/*
 * led.h
 *
 * Created: 9/9/2022 10:57:51 PM
 *  Author: Mahmoud Nasser
 */ 
#include "..\..\MCAL\DIO Driver\DIO.h"

#ifndef LED_H_
#define LED_H_
void LED_init(uint8_t ledport, uint8_t ledpin);
void LED_off(uint8_t ledport, uint8_t ledpin);
void LED_on(uint8_t ledport, uint8_t ledpin);
void LED_toggle(uint8_t ledport, uint8_t ledpin);




#endif /* LED_H_ */
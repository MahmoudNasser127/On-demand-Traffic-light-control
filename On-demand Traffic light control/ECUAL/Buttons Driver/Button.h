/*
 * button.h
 *
 * Created: 9/10/2022 3:53:23 AM
 *  Author: Mahmoud Nasser
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "..\..\MCAL\DIO Driver\DIO.h"
#define Button1port PORT_C
#define Button1pin  PIN0
#define Button2port PORT_D
#define Button2pin  PIN4


#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
//button state macros
#define LOW 0
#define HIGH 1

//button place
 void button_init (uint8_t buttonport, uint8_t buttonpin);
// button state
 void button_read (uint8_t buttonport,  uint8_t buttonpin, uint8_t *value);




#endif /* BUTTON_H_ */
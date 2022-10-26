/*
 * APP.h
 *
 * Created: 10/25/2022 6:29:30 AM
 *  Author: Mahmoud Nasser
 */ 

#include "../MCAL/Interrupts Driver/Interrupts.h"
#ifndef APP_H_
#define APP_H_

void APPinit(void);

void APPstart(void);

typedef enum {
	NORM_mode,
	PED_mode
} set_mode ;

typedef enum {
	GREEN,
	YEllOW,
	RED
} CARLEDstate ;



// PIN defines
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

// direction define
#define IN 0
#define OUT 1

// port numbers define
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'


//values define
#define LOW 0
#define HIGH 1

#endif /* APP_H_ */
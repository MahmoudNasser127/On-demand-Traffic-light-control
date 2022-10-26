/*
 * DIO.h
 * Created: 9/9/2022 4:05:28 PM
 *  Author: Mahmoud Nasser
 */ 

#include "../../Utilities/Registers.h"
#ifndef DIO_H_
#define DIO_H_
 
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

 
void DIO_init(uint8_t portno, uint8_t pinno, uint8_t direction); // set direction
void DIO_write(uint8_t portno, uint8_t pinno, uint8_t value); // set direction write data to dio
void DIO_toggle(uint8_t portno, uint8_t pinno); // toggle dio 
void DIO_read(uint8_t portno, uint8_t pinno, uint8_t *value); // set direction







#endif /* DIO_H_ */
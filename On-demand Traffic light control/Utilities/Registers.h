/*
 * registers.h
 * Created: 9/9/2022 4:27:51 PM
 *  Author: Mahmoud Nasser
 */ 

typedef unsigned char uint8_t;
typedef unsigned int uint32_t;
#ifndef REGISTERS_H_
#define REGISTERS_H_

// PORTA define*************************
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)


// PORTA define*************************
#define PORTB *((volatile uint8_t *)0x38)
#define DDRB *((volatile uint8_t *)0x37)
#define PINB *((volatile uint8_t *)0x36)

// PORTA define*************************
#define PORTC *((volatile uint8_t *)0x35)
#define DDRC *((volatile uint8_t *)0x34)
#define PINC *((volatile uint8_t *)0x33)


// PORTA define*************************
#define PORTD *((volatile uint8_t *)0x32)
#define DDRD *((volatile uint8_t *)0x31)
#define PIND *((volatile uint8_t *)0x30)

// Timer0 define*************************
#define TCCR0 *((volatile uint8_t *)0x53)
#define TCNT0 *((volatile uint8_t *)0x52)
#define TIFR *((volatile uint8_t *)0x58)

//External Interrupts define************
 #define MCUCR	*((volatile uint8_t*)0x55)
 #define MCUCSR	*((volatile uint8_t*)0x54)
 #define GICR	*((volatile uint8_t*)0x5B)
 #define GIFR	*((volatile uint8_t*)0x5A)
 #define SREG	*((volatile uint8_t*)0x5F)

///********* different interrupt*******/





#endif /* REGISTERS_H_ */
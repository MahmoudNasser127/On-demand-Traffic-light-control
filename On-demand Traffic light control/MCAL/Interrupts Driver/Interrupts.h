/*
 * Interrupts.h
 *
 * Created: 10/23/2022 10:14:14 PM
 *  Author: Mahmoud Nasser
 */ 
#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_


# define sei()  __asm__ __volatile__ ("sei" ::: "memory")
# define cli()  __asm__ __volatile__ ("cli" ::: "memory")

#define EXT_INT_0           __vector_1
#define EXT_INT_1            __vector_2
#define EXT_INT_2            __vector_3
/*

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)*/

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)
 
#define ISC00   0
#define ISC01   1
#define ISC10   2
#define ISC11   3

#define INT0    6
#define INT1    7

typedef enum{
	risingedgeINT0,
	fallingedgeINT0,
	anychangeINT0,
	risingedgeINT1,
	fallingedgeINT1,
	anychangeINT1,
}EnumSense ;

 void setintsense(EnumSense sense);
 
 #endif /* INTERRUPTS_H_ */

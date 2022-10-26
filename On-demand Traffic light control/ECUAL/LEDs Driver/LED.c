/*
 * led.c
 *
 * Created: 9/9/2022 10:57:58 PM
 *  Author: Mahmoud Nasser
 */ 
#include "led.h"
void LED_init(uint8_t ledport, uint8_t ledpin)
{
	DIO_init(ledport, ledpin, OUT);
}
void LED_off(uint8_t ledport, uint8_t ledpin)
{
		DIO_write(ledport,ledpin, LOW);
}
void LED_on(uint8_t ledport, uint8_t ledpin)
{
	DIO_write(ledport,ledpin, HIGH);
}
void LED_toggle(uint8_t ledport, uint8_t ledpin)
{
switch(ledport){
	case PORT_A:
	PORTA ^= (1<<ledpin);
	break;
	
	case PORT_B :
	PORTB ^= (1<<ledpin);
	break;
	
	case PORT_C :
	PORTC ^= (1<<ledpin);
	break;
	
	case PORT_D :
	PORTD ^= (1<<ledpin);
	break;
}

	
}
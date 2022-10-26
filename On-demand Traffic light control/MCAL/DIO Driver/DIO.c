/*
 * DIO.c
 *
 * Created: 9/9/2022 4:05:45 PM
 *  Author: Mahmoud Nasser
 */ 
#include "DIO.h"
void DIO_init(uint8_t portno, uint8_t pinno, uint8_t direction)
{
	switch(portno){
	
		case PORT_A :
		if (direction == IN)
		{ 
			DDRA &= ~(1<<pinno);
		}
		else if( direction == OUT) 
		{
			DDRA |= (1<<pinno);
		}
		break;
		
		case PORT_B :
		if (direction == IN)
		{
			DDRB &= ~(1<<pinno);
		}
		else if( direction == OUT)
		{
			DDRB |= (1<<pinno);
		}
		break;
		case PORT_C :
		if (direction == IN)
		{
			DDRC &= ~(1<<pinno);
		}
		else if( direction == OUT)
		{
			DDRC |= (1<<pinno);
		}
		break;
		case PORT_D :
		if (direction == IN)
		{
			DDRD &= ~(1<<pinno);
		}
		else if( direction == OUT)
		{
			DDRD |= (1<<pinno);
		}
		break;
	}
		
}
void DIO_write(uint8_t portno, uint8_t pinno, uint8_t value)
{
	switch(portno){
		case PORT_A:
			if (value == LOW)
			{ 
			PORTA &= ~(1<<pinno);
			}
			else if( value == HIGH) 
			{
			PORTA |= (1<<pinno);
			}
			break;
			
			case PORT_B :
			if (value == LOW)
			{
			PORTB &= ~(1<<pinno);
			}
			 if( value == HIGH)
			{
			PORTB |= (1<<pinno);
			}
			break;
			
		case PORT_C :
		if (value == LOW)
		{
			PORTC &= ~(1<<pinno);
		}
		 if( value == HIGH)
		{
			PORTC |= (1<<pinno);
		}
		break;
		
		case PORT_D :
		if (value == LOW)
		{
			PORTD &= ~(1<<pinno);
		}
		if( value == HIGH)
		{
			PORTD |= (1<<pinno);
		}
		break;
	}
}
void DIO_toggle(uint8_t portno, uint8_t pinno)
{
		switch(portno){
			case PORT_A:
	        PORTA ^= (1<<pinno);
			break;
			
			case PORT_B :
	        PORTB ^= (1<<pinno);
			break;
			
			case PORT_C :
	        PORTD ^= (1<<pinno);
			break;
			
			case PORT_D :
	        PORTC ^= (1<<pinno);
			break;
		}
	
}
int DIO_read(uint8_t portno, uint8_t pinno, uint8_t *value) // set direction
{
	switch(portno){
		
		case PORT_A :
		*value = (PINA&(1<<pinno))>>pinno;
return value;		
		*value = (PINB&(1<<pinno))>>pinno;
		case PORT_B :
return value;
		
		case PORT_C :
		*value = (PINC&(1<<pinno))>>pinno;
return value;
		
		case PORT_D :
		*value = (PIND&(1<<pinno))>>pinno;
return value;
		
	}
}
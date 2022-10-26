/*
 * Interrupts.c
 *
 * Created: 10/23/2022 11:12:11 PM
 *  Author: Mahmoud Nasser
 */ 
#include "Interrupts.h"
#include "../../Utilities/Registers.h"
 void setintsense(EnumSense sense){
	
switch(sense){
	case risingedgeINT0 :
	MCUCR |= (1<<ISC00)|(1<<ISC01);
	GICR  |= (1<<6);
   break;
	
	case fallingedgeINT0 :
	MCUCR |= (1<<ISC01);
	GICR  |= (1<<INT0);

	break;
	
	case anychangeINT0 :
	 MCUCR |= (1<<ISC00);
	 GICR  |= (1<<INT0);
	break;  
	
	case risingedgeINT1 :
	MCUCR |= (1<<ISC11)|(1<<ISC10);
	GICR  |= (1<<INT1);
	break;
	
	case fallingedgeINT1 :
	MCUCR |= (1<<ISC10);
	GICR  |= (1<<INT1);
	break;
	
	case anychangeINT1:
	MCUCR |= (1<<ISC11);
	GICR  |= (1<<INT1);
	break;
}
 }


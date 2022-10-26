/*
 * Timer_Driver.c
 *
 * Created: 10/23/2022 12:18:22 AM
 *  Author: Mahmoud Nasser
 */ 
#include "TIimers.h"
 void normalmode_init(void){	
	 	TCCR0 = 0x00;

 }
     

 void delay(uint32_t prescaler,uint32_t intialvalue){
	 TCNT0 = intialvalue;
	 switch (prescaler){
		 case 1:
		  TCCR0 |= (1<<CS00);
		  //wait until the overflow flag is set
		  while((TIFR & (1<<0))==0);
		  //reset the overflow flag
		  TIFR |= (1<<0);
		  TCCR0 = 0x00;
		 break;
	case 8:
	TCCR0 |= (1<<CS01);
	//wait until the overflow flag is set
	while((TIFR & (1<<0))==0);
	//reset the overflow flag
	TIFR |= (1<<0);
	TCCR0 = 0x00;
	break;
	
	case 64:
	TCCR0 |= (1<<CS00)|(1<<CS01);
	//wait until the overflow flag is set
	while((TIFR & (1<<0))==0);
	//reset the overflow flag
	TIFR |= (1<<0);
	TCCR0 = 0x00;
	break;
	
	case 256:
	TCCR0 |= (1<<CS02);
	//wait until the overflow flag is set
	while((TIFR & (1<<0))==0);
	//reset the overflow flag
	TIFR |= (1<<0);
	TCCR0 = 0x00;
	break;
	
	case 1024:
	TCCR0 |= (5<<CS00);
	//wait until the overflow flag is set
	while((TIFR & (1<<0))==0);
	//reset the overflow flag
	TIFR |= (1<<0);
	TCCR0 = 0x00;
	break;
	
	
	}

 }
  void delay_ov_pre(uint32_t prescaler,uint32_t no_of_ov)
  {
	  switch (prescaler){
		  case 1:
		  for (int i = 0 ;i<no_of_ov;i++)
		  {
		  TCCR0 |= (1<<CS00);
		  //wait until the overflow flag is set
		  while((TIFR & (1<<0))==0);
		  //reset the overflow flag
		  TIFR |= (1<<0);
		  TCCR0 = 0x00;
		  break;
		  }
		  case 8:
		    for (int i = 0 ;i<no_of_ov;i++)
		    {
		  TCCR0 |= (1<<CS01);
		  //wait until the overflow flag is set
		  while((TIFR & (1<<0))==0);
		  //reset the overflow flag
		  TIFR |= (1<<0);
		  TCCR0 = 0x00;
		  break;
			}
		  case 64:
		    for (int i = 0 ;i<no_of_ov;i++)
		    {
		  TCCR0 |= (1<<CS00)|(1<<CS01);
		  //wait until the overflow flag is set
		  while((TIFR & (1<<0))==0);
		  //reset the overflow flag
		  TIFR |= (1<<0);
		  TCCR0 = 0x00;
		  break;
			}
		  case 256:
		    for (int i = 0 ;i<no_of_ov;i++)
		    {
		  TCCR0 |= (1<<CS02);
		  //wait until the overflow flag is set
		  while((TIFR & (1<<0))==0);
		  //reset the overflow flag
		  TIFR |= (1<<0);
		  TCCR0 = 0x00;
		  break;
			}
		  case 1024:
		    for (int i = 0 ;i<no_of_ov;i++)
		    {
		  TCCR0 |= (5<<CS00);
		  //wait until the overflow flag is set
		  while((TIFR & (1<<0))==0);
		  //reset the overflow flag
		  TIFR |= (1<<0);
		  TCCR0 = 0x00;
			}
	  	break;
	  }
  }

	
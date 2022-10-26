/*
 * APP.c
 *
 * Created: 10/25/2022 6:29:15 AM
 *  Author: Mahmoud Nasser
 */ 
#include "APP.h"
	 set_mode mode = NORM_mode;
		//SetCARLED color;
     CARLEDstate CARLED;
	//SetCARLED color;
    APPinit(){
	
		//Enable interrupts
		 sei();
		 //Initializing CAR LEDs
 		 LED_init(PORT_A, PIN0);
		 LED_init(PORT_A,PIN1);
		 LED_init(PORT_A,PIN2);
		 //Initializing pedestrian  LEDs
		 LED_init(PORT_B,PIN0);
		 LED_init(PORT_B,PIN1);
		 LED_init(PORT_B,PIN2);
		 
		 //Initializing crosswalk button
		 button_init(PORT_D,PIN2);
		 //setting timer mode
		 normalmode_init();
		 
	     //setting interrupts mode
		 setintsense(risingedgeINT0);
	}
	
	APPstart(){
		while(1)
{
		switch (mode)
		{ 
			case NORM_mode:
			LED_on(PORT_A,PIN0);
		for (int i=0;i<18;i++)
			{
			//break loop
			if (mode != NORM_mode ){
				CARLED = GREEN ;
				break;
			}
			delay_ov_pre(1024, 1);
			}
			//********************
			//break switch
			if (mode != NORM_mode ){
				break;
			}
			//*****************
			
			//blinking yellow LED
		for (int i=0;i<18;i++)
			{
		    LED_toggle(PORT_A,PIN1);
			/*check the mode*/
		    if (mode != NORM_mode ){
				CARLED = YEllOW;
			break;
			}
			delay_ov_pre(1024, 1);
			}
			//break switch
			if (mode != NORM_mode ){
				break;
			}
			//*******
			LED_off(PORT_A,PIN0);
			LED_off(PORT_A,PIN1);
			//*******
			LED_on(PORT_A,PIN2);
			for (int i=0;i<18;i++)
			{
				if (mode != NORM_mode)
				{
				CARLED = RED;
				break;
				}
				delay_ov_pre(1024, 1);
			}
			//break switch
			if (mode != NORM_mode ){
				break;
			}
			//*********************
			for (int i=0; i<18; i++)
			{
			LED_toggle(PORT_A,PIN1);
			if (mode != NORM_mode ){
			break;
			}
		    delay_ov_pre(1024, 1);
			}
			LED_off(PORT_A,PIN2);
			break;
	//********************************//
			case PED_mode:
			     switch (CARLED){				 
				 case GREEN:
				 //enable RED pedestrian LED
  			     LED_on(PORT_B,PIN2);
					 
				 //blinking the two YEllOW LED
				 for (int i=0; i<18; i++)
				 {
					 LED_toggle(PORT_A,PIN1);
					 LED_toggle(PORT_B,PIN1);
					 delay_ov_pre(1024, 1);
				 }
			
				 LED_on(PORT_A,PIN2);
				 LED_on(PORT_B,PIN0);
			 	 LED_off(PORT_A,PIN0);
			 	 LED_off(PORT_B,PIN2);
				 delay_ov_pre(1024, 19);
				 
                 break;
				 //Press while LED RED is open
				 
				 case RED:
				 LED_on(PORT_B,PIN0);
				 delay_ov_pre(1024, 19);

				case YEllOW:
				LED_off(PORT_A,PIN0);
									
 				 }
				 for (int i=0; i<18; i++)
				 {
					 LED_toggle(PORT_A,PIN1);
					 LED_toggle(PORT_B,PIN1);
					 delay_ov_pre(1024, 1);
				 }
				 LED_off(PORT_A,PIN2);
				 LED_off(PORT_B,PIN0);
				 LED_on(PORT_A,PIN0);
				 LED_on(PORT_B,PIN2);
				 mode = NORM_mode;
				 LED_off(PORT_B,PIN2);
		}
	}
	}
	ISR( EXT_INT_0)
	{
		mode = PED_mode;
	}
/*
 * CFile1.h
 *
 * Created: 10/23/2022 12:19:01 AM
 *  Author: Mahmoud Nasser
 */ 
#include "../../Utilities/Registers.h"
#ifndef Timers_H_
#define Timers_H_
#define CS00 0
#define CS01 1
#define CS02 2

 void normalmode_init(void);
 void delay(uint32_t prescaler,uint32_t intialvalue);
 void delay_ov_pre(uint32_t prescaler,uint32_t no_of_ov);


#endif /* DIO_H_ */
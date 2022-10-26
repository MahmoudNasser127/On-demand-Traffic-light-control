/*
 * button.c
 *
 * Created: 9/10/2022 3:53:35 AM
 *  Author: Mahmoud Nasser
 */ 
#include "button.h"

void button_init (uint8_t buttonport, uint8_t buttonpin)
{
	DIO_init(buttonport, buttonpin, IN);
}
///button red 
void button_read (uint8_t buttonport,  uint8_t buttonpin, uint8_t *value)
{
	 DIO_read(buttonport, buttonpin, value);
}

/*
 * main.c
 *
 *  Created on: Oct 4, 2020
 *      Author: karim
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"


void main (void){
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2,2);

	MGPIO_voidSetPinDirection (GPIOA,0,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,0,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,1,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,1,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,2,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,2,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,3,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,3,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,4,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,4,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,5,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,5,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,6,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,6,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,7,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,7,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,8,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,8,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,9,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,9,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,10,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,10,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,11,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,11,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,12,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,12,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,13,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,13,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,14,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,14,HIGH);

	MGPIO_voidSetPinDirection (GPIOA,15,OUTPUT_SPEED_10MHZ_PP);
    MGPIO_voidSetPinValue (GPIOA,15,HIGH);
	while(1){

	}

}




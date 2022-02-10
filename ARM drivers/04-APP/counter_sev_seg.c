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
#include "SEV_SEG_interface.h"


void main (void){
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2,2);
	SEVENSEG_voidInit();
	u8 x=0;
	u32 i;
	u32 j;


	while(1){

		SEVENSEG_voidWriteDigit (x++);

		for(i=0;i<=500;i++){
					for(j=0;j<=500;j++){

						//asm("NOP");
					}
				}


		if(x==10) {x=0;}
	}

}

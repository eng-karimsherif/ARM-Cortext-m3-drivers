/***************************************************/
// author: karim sherif lotfy
// date: 6th Jan 2021 
// model: STM32F103 (ARM cortex M3)
// version : V01
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
/*******************************************************************************************/
/*
  objetive: including List  
*/
// library including
#include "BIT_MATH.h"
#include "STD_TYPES.h"
// MCAL h files including
#include "RCC_interface.h"
#include "RCC_config.h"
#include "RCC_private.h"
#include "GPIO_interface.h"
#include "GPIO_config.h"
#include "GPIO_private.h"
// HAL h files including
#include "LED_interface.h"
#include "LED_config.h"
#include "LED_private.h"
/*******************************************************************************************/
/*
  objetive: function to Intialize GPIO configuration 
*/
void LED_voidInit(u8 copy_u8Port,u8 copy_u8Pin)
{
		switch (copy_u8Port){
		case GPIOA:
				 RCC_voidEnableClock (RCC_APB2,RCC_APB2_IOPA);
				 MGPIO_voidSetPinDirection (GPIOA,copy_u8Pin,OUTPUT_SPEED_10MHZ_PP);
		break;
		
		case GPIOB:
				 RCC_voidEnableClock (RCC_APB2,RCC_APB2_IOPB);
				 MGPIO_voidSetPinDirection (GPIOB,copy_u8Pin,OUTPUT_SPEED_10MHZ_PP);
		break;

		case GPIOC:
				 RCC_voidEnableClock (RCC_APB2,RCC_APB2_IOPC);
				 MGPIO_voidSetPinDirection (GPIOC,copy_u8Pin,OUTPUT_SPEED_10MHZ_PP);
		break;
		default: break;
	}	
	
}
/*******************************************************************************************/
/*
  objetive: function to turn ON the led  
*/
void LED_voidOn(u8 copy_u8Port,u8 copy_u8Pin)
{
	
}
/*******************************************************************************************/
/*
  objetive: function to turn OFF the led  
*/
void LED_voidOff(u8 copy_u8Port,u8 copy_u8Pin)
{
	
}
/*******************************************************************************************/
/*
  objetive: function to toggle the led  
*/
void LED_voidToggle(u8 copy_u8Port,u8 copy_u8Pin)
{
	
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/
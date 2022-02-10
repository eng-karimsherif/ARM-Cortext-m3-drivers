/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 6th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
/*******************************************************************************************/
/*
  objetive: including List  
*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
/*******************************************************************************************/
/*
  objetive: function to intialized the diriction of pins in GPIO 
*/
void MGPIO_voidSetPinDirection (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8Mode)
{
	switch (copy_u8Port){
		case GPIOA:
		     if (copy_u8Pin<=7){ // PORTA LOW pins
				 GPIOA_CRL &= ~((0b1111)<<(copy_u8Pin*4));
		         GPIOA_CRL |= ((copy_u8Mode)<<(copy_u8Pin*4));
			 }
			 else if (copy_u8Pin<=15){ // PORTA HIGH pins
				 copy_u8Pin = copy_u8Pin-8;
				 GPIOA_CRH &= ~((0b1111)<<(copy_u8Pin*4));
		         GPIOA_CRH |= ((copy_u8Mode)<<(copy_u8Pin*4));
			 } 
		break;
		
		case GPIOB:
		     if (copy_u8Pin<=7){ // PORTB LOW pins
				 GPIOB_CRL &= ~((0b1111)<<(copy_u8Pin*4));
		         GPIOB_CRL |= ((copy_u8Mode)<<(copy_u8Pin*4));
			 }
			 else if (copy_u8Pin<=15){ // PORTB HIGH pins
				 copy_u8Pin = copy_u8Pin-8;
				 GPIOB_CRH &= ~((0b1111)<<(copy_u8Pin*4));
		         GPIOB_CRH |= ((copy_u8Mode)<<(copy_u8Pin*4));
			 }		
		break;

		case GPIOC:
		     if (copy_u8Pin<=7){ // PORTC LOW pins
				 GPIOC_CRL &= ~((0b1111)<<(copy_u8Pin*4));
		         GPIOC_CRL |= ((copy_u8Mode)<<(copy_u8Pin*4));
			 }
			 else if (copy_u8Pin<=15){ // PORTC HIGH pins
				 copy_u8Pin = copy_u8Pin-8;
				 GPIOC_CRH &= ~((0b1111)<<(copy_u8Pin*4));
		         GPIOC_CRH |= ((copy_u8Mode)<<(copy_u8Pin*4));
			 }				
		break;
		default: break;
	}	
}
/*******************************************************************************************/
/*
  objetive: function to set the value of output pin 
*/
void MGPIO_voidSetPinValue (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8Value)
{
	switch (copy_u8Port){
		case GPIOA:
		     if (copy_u8Value == HIGH){ 
		    	 SET_BIT(GPIOA_ODR,copy_u8Pin);
			 }
			 else if (copy_u8Value == LOW){ 
				 CLR_BIT(GPIOA_ODR,copy_u8Pin);
			 } 
		break;
		
		case GPIOB:
		     if (copy_u8Value == HIGH){ 
                 SET_BIT(GPIOB_ODR,copy_u8Pin);
			 }
			 else if (copy_u8Value == LOW){ 
				 CLR_BIT(GPIOB_ODR,copy_u8Pin);
			 } 		
		break;

		case GPIOC:
		     if (copy_u8Value == HIGH){ 
		    	 SET_BIT(GPIOC_ODR,copy_u8Pin);
			 }
			 else if (copy_u8Value == LOW){ 
				 CLR_BIT(GPIOC_ODR,copy_u8Pin);
			 } 				
		break;
		default: break;
	}
}
/*******************************************************************************************/
/*
  objetive: function to get the value of input pin  
*/
u8 MGPIO_voidGetPinValue (u8 copy_u8Port,u8 copy_u8Pin)
{
	u8 LOCAL_u8Result =0; // local variable init
	
	switch (copy_u8Port){
		case GPIOA:
                 LOCAL_u8Result = GET_BIT(GPIOA_ODR,copy_u8Pin);
		break;
		
		case GPIOB:
                 LOCAL_u8Result = GET_BIT(GPIOB_ODR,copy_u8Pin);
		break;

		case GPIOC:
                 LOCAL_u8Result = GET_BIT(GPIOC_ODR,copy_u8Pin);
		break;
		default: break;
	}
	
	return LOCAL_u8Result;
}
/*******************************************************************************************/
/*
  objetive: function to set an output pin directly using BSR register  
*/
void MGPIO_voidSimpleSetPinValue (u8 copy_u8Port,u8 copy_u8Pin)
{
	switch (copy_u8Port){
		case GPIOA:
				 GPIOA_BSR = (1<<copy_u8Pin);
		break;
		
		case GPIOB:
				 GPIOB_BSR = (1<<copy_u8Pin);
		break;

		case GPIOC:
				 GPIOC_BSR = (1<<copy_u8Pin);
		break;
		default: break;
	}	
}
/*******************************************************************************************/
/*
  objetive: function to reset an output pin directly using BRR register  
*/
void MGPIO_voidSimpleResetPinValue (u8 copy_u8Port,u8 copy_u8Pin)
{
	switch (copy_u8Port){
		case GPIOA:
				 GPIOA_BRR = (1<<copy_u8Pin);
		break;
		
		case GPIOB:
				 GPIOB_BRR = (1<<copy_u8Pin);
		break;

		case GPIOC:
				 GPIOC_BRR = (1<<copy_u8Pin);
		break;
		default: break;
	}	
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/
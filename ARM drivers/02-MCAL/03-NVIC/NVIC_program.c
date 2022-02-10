/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 16th Jan 2021 (ver2)
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

#include "NVIC_interface.h"
#include "NVIC_config.h"
#include "NVIC_private.h"
/*******************************************************************************************/
/*
  objetive: function to intialize NVIC by detrmine group and sub priority bits in SCB peripheral
*/
void MNVIC_voidInit (void)
{
    // this func is arch wrong ,, we will replace it with SCB driver later
    #define SCB_BASE_ADRESS  0xE000ED00
    #defin SCB_AIRCR  *((volatile u32*) SCB_BASE_ADRESS+0x0C)
    SCB_AIRCR = MNVIC_GROUP_SUB_DISTRIBUTION;
}
/*******************************************************************************************/
/*
  objetive: function to enable an interrupt 
*/
void MNVIC_voidEnableInterrupt (u8 copy_u8IntNumberOrName)
{
	if (copy_u8IntNumberOrName <=31){
		SET_BIT(NVIC_ISER0,copy_u8IntNumberOrName);
	}
	
    if (copy_u8IntNumberOrName <=59){
		copy_u8IntNumberOrName -=32;
		SET_BIT(NVIC_ISER1,copy_u8IntNumberOrName);
	}
	
	if (copy_u8IntNumberOrName >59){
		/*return error*/
	}
}
/*******************************************************************************************/
/*
  objetive: function to disable an interrupt  
*/
void MNVIC_voidDisableInterrupt (u8 copy_u8IntNumberOrName)
{
	if (copy_u8IntNumberOrName <=31){
		SET_BIT(NVIC_ICER0,copy_u8IntNumberOrName);
	}
	
    if (copy_u8IntNumberOrName <=59){
		copy_u8IntNumberOrName -=32;
		SET_BIT(NVIC_ICER1,copy_u8IntNumberOrName);
	}
	
	if (copy_u8IntNumberOrName >59){
		/*return error*/
	}
}
/*******************************************************************************************/
/*
  objetive: function to set interrupt's pending flag 
*/
void MNVIC_voidSetPendingFlag (u8 copy_u8IntNumberOrName)
{
	if (copy_u8IntNumberOrName <=31){
		SET_BIT(NVIC_ISPR0,copy_u8IntNumberOrName);
	}
	
    if (copy_u8IntNumberOrName <=59){
		copy_u8IntNumberOrName -=32;
		SET_BIT(NVIC_ISPR1,copy_u8IntNumberOrName);
	}
	
	if (copy_u8IntNumberOrName >59){
		/*return error*/
	}		
}
/*******************************************************************************************/
/*
  objetive: function to clear interrupt's pending flag 
*/
void MNVIC_voidClearPendingFlag (u8 copy_u8IntNumberOrName)
{
	if (copy_u8IntNumberOrName <=31){
		SET_BIT(NVIC_ICPR0,copy_u8IntNumberOrName);
	}
	
    if (copy_u8IntNumberOrName <=59){
		copy_u8IntNumberOrName -=32;
		SET_BIT(NVIC_ICPR1,copy_u8IntNumberOrName);
	}
	
	if (copy_u8IntNumberOrName >59){
		/*return error*/
	}
}
/*******************************************************************************************/
/*
  objetive: function to read active flag of interrupt
*/
u8 MNVIC_u8GetActiveFlag (u8 copy_u8IntNumberOrName)
{
	u8 local_u8Result;
	if (copy_u8IntNumberOrName <=31){
		local_u8Result = GET_BIT(NVIC_IABR0,copy_u8IntNumberOrName);
	}
	
    if (copy_u8IntNumberOrName <=59){
		copy_u8IntNumberOrName -=32;
		local_u8Result = GET_BIT(NVIC_IABR1,copy_u8IntNumberOrName);
	}
	
	if (copy_u8IntNumberOrName >59){
		/*return error*/
	}
	
	return local_u8Result;
}
/*******************************************************************************************/
/*
  objetive: function to set the priority of the interrupt
*/
void MNVIC_SetPriority (u8 copy_u8IntNumberOrName , u8 copy_u8priority )
{
	if (Copy_PeripheralIdx < 60){
		NVIC_IPR[copy_u8IntNumberOrName] = Copy_u8Priority;
	}

	if (copy_u8IntNumberOrName >59)
	{
		/* Report Error */
	}
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/
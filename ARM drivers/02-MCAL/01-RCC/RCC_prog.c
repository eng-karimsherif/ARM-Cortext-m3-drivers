/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 5th Jan 2021 (ver2)
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

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
void RCC_voidInitSysClock (void)
{
	#if RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
	    RCC_CR = 0x00010000; // enable HSE with no bypass
		RCC_CFGR = 0x00000001;
	
	
	#elif RCC_CLOCK_TYPE == RCC_HSE_RC
	    RCC_CR = 0x00050000; // enable HSE with bypass
		RCC_CFGR = 0x00000001;	
	
	
	#elif RCC_CLOCK_TYPE == RCC_HSI
	    RCC_CR = 0x00000081; // enable HSI + trimming =0 
		RCC_CFGR = 0x00000000;	
	
	#elif RCC_CLOCK_TYPE == RCC_PLL
	    #if RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
		    RCC_CR = 0x01000081; // enable HSI + trimming =0 , enable PLL
		    RCC_CFGR = (0x00000002|(RCC_PLL_MUL_VAL <<18));
	    #elif RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
		    RCC_CR = 0x01010000; // enable HSI ,enable PLL 
		    RCC_CFGR = (0x00030002|(RCC_PLL_MUL_VAL <<18));
	    #elif RCC_PLL_INPUT == RCC_PLL_IN_HSE
		    RCC_CR = 0x01010000; // enable HSI ,enable PLL 
		    RCC_CFGR = (0x00010002|(RCC_PLL_MUL_VAL <<18));
		#endif
	
	else
		#error (" you choosed wrong clock type")
	
	#endif
}
/*******************************************************************************************/
/*
  objetive: function to enable the clock of any peripherals  
*/
void RCC_voidEnableClock (u8 copy_u8BusId,u8 copy_u8PerId)
{
	if(copy_u8PerId <=31){
		switch (copy_u8BusId){
			case RCC_AHP  : SET_BIT(RCC_AHBENR ,copy_u8PerId); break;
			case RCC_APB1 : SET_BIT(RCC_APB1ENR ,copy_u8PerId); break;
			case RCC_APB2 : SET_BIT(RCC_APB2ENR ,copy_u8PerId); break;
		}
	}
	else{
		/*return error*/
	}
}
/*******************************************************************************************/
/*
  objetive: function to disable the clock of any peripherals  
*/			
void RCC_voidDisableClock (u8 copy_u8BusId,u8 copy_u8PerId)
{
	if(copy_u8PerId <=31){
		switch (copy_u8BusId){
			case RCC_AHP  : CLR_BIT(RCC_AHBENR ,copy_u8PerId); break;
			case RCC_APB1 : CLR_BIT(RCC_APB1ENR ,copy_u8PerId); break;
			case RCC_APB2 : CLR_BIT(RCC_APB2ENR ,copy_u8PerId); break;
		}
	}
	else{
		/*return error*/
	}		
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/
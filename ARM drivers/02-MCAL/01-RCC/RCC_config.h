/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 5th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H
/*******************************************************************************************/
/*
   objective: select the clock source type 
   options: 
            1-RCC_HSE_CRYSTAL
            2-RCC_HSE_RC
            3-RCC_HSI
            4-RCC_PLL          
*/
#define RCC_CLOCK_TYPE  RCC_HSE_CRYSTAL
/*******************************************************************************************/
/*
   objective: select the input signal to PLL if it's selected
   options: 
            1-RCC_PLL_IN_HSI_DIV_2
            2-RCC_PLL_IN_HSE_DIV_2
            3-RCC_PLL_IN_HSE        
   note : select value only if you have PLL as system input clock 
 */
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_INPUT  RCC_PLL_IN_HSE_DIV_2
#endif
/*******************************************************************************************/
/*
   objective: determine the multiplication factor of  PLL if it's selected
   options : 2 to 16 
   note : select value only if you have PLL as system input clock 
*/
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_MUL_VAL  4
#endif
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
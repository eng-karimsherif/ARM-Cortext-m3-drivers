/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 5th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H
/*******************************************************************************************/
/*
  objetive: define RCC base register
  note: RCC is connected with AHB bus   
*/
#define RCC_base_address 0x40021000 
/*******************************************************************************************/
/*
  objetive: define RCC peripheral registers 
*/
#define RCC_CR          *((u32*)(RCC_base_address+0x00))
#define RCC_CFGR        *((u32*)(RCC_base_address+0x04))
#define RCC_CIR         *((u32*)(RCC_base_address+0x08))
#define RCC_APB2RSTR    *((u32*)(RCC_base_address+0x0C))
#define RCC_APB1RSTR    *((u32*)(RCC_base_address+0x10))
#define RCC_AHBENR      *((u32*)(RCC_base_address+0x14))
#define RCC_APB2ENR     *((u32*)(RCC_base_address+0x18))
#define RCC_APB1ENR     *((u32*)(RCC_base_address+0x1C))
#define RCC_RCC_BDCR    *((u32*)(RCC_base_address+0x20))
#define RCC_CSR         *((u32*)(RCC_base_address+0x24))
/*******************************************************************************************/
/*
  objetive: define clock types private macros 
 */
#define RCC_HSE_CRYSTAL  0
#define RCC_HSE_RC       1
#define RCC_HSI          2
#define RCC_PLL          3
/*******************************************************************************************/
/* 
  objetive: define PLL options private macros 
*/
#define RCC_PLL_IN_HSI_div_2   0
#define RCC_PLL_IN_HSE_div_2   1
#define RCC_PLL_IN_HSE         2
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
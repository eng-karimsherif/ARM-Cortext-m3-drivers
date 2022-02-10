/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 6th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/*******************************************************************************************/
/*
  objetive: GPIO peripherals base adresses  
*/
#define GPIOA_BASE_ADDRESS   0x40010800  // GPIOA base address
#define GPIOB_BASE_ADDRESS   0x40010C00  // GPIOA base address
#define GPIOC_BASE_ADDRESS   0x40011000  // GPIOA base address
/*******************************************************************************************/
/*
  objetive: Register adresses for PORTA 
*/
#define GPIOA_CRL  *((u32*)(GPIOA_BASE_ADDRESS + 0x00))
#define GPIOA_CRH  *((u32*)(GPIOA_BASE_ADDRESS + 0x04))
#define GPIOA_IDR  *((u32*)(GPIOA_BASE_ADDRESS + 0x08))
#define GPIOA_ODR  *((u32*)(GPIOA_BASE_ADDRESS + 0x0C))
#define GPIOA_BSR  *((u32*)(GPIOA_BASE_ADDRESS + 0x10))
#define GPIOA_BRR  *((u32*)(GPIOA_BASE_ADDRESS + 0x04))
#define GPIOA_LCK  *((u32*)(GPIOA_BASE_ADDRESS + 0x08))
/*******************************************************************************************/
/*
  objetive: Register adresses for PORTB 
*/
#define GPIOB_CRL  *((u32*)(GPIOB_BASE_ADDRESS + 0x00))
#define GPIOB_CRH  *((u32*)(GPIOB_BASE_ADDRESS + 0x04))
#define GPIOB_IDR  *((u32*)(GPIOB_BASE_ADDRESS + 0x08))
#define GPIOB_ODR  *((u32*)(GPIOB_BASE_ADDRESS + 0x0C))
#define GPIOB_BSR  *((u32*)(GPIOB_BASE_ADDRESS + 0x10))
#define GPIOB_BRR  *((u32*)(GPIOB_BASE_ADDRESS + 0x04))
#define GPIOB_LCK  *((u32*)(GPIOB_BASE_ADDRESS + 0x08))
/*******************************************************************************************/
/*
  objetive: Register adresses for PORTC 
*/
#define GPIOC_CRL  *((u32*)(GPIOC_BASE_ADDRESS + 0x00))
#define GPIOC_CRH  *((u32*)(GPIOC_BASE_ADDRESS + 0x04))
#define GPIOC_IDR  *((u32*)(GPIOC_BASE_ADDRESS + 0x08))
#define GPIOC_ODR  *((u32*)(GPIOC_BASE_ADDRESS + 0x0C))
#define GPIOC_BSR  *((u32*)(GPIOC_BASE_ADDRESS + 0x10))
#define GPIOC_BRR  *((u32*)(GPIOC_BASE_ADDRESS + 0x04))
#define GPIOC_LCK  *((u32*)(GPIOC_BASE_ADDRESS + 0x08))
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
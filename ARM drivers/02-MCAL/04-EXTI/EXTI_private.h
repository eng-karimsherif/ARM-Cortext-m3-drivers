/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 18th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef EXTI_PRIVATE_H
#define EXTI_PRIVATE_H

/*******************************************************************************************/
/*
  objetive: EXTI peripheral base adresses  
*/
#define EXTI_BASE_ADRESS 0x40010400
/*******************************************************************************************/
/*
  objetive: Register adresses defination
*/
typedef struct {
	volatile u32 IMR;
    volatile u32 EMR;
	volatile u32 RTSR;
	volatile u32 FTSR;
	volatile u32 SWIER;
	volatile u32 PR;
}EXTI_types;

#define MEXTI  ((EXTI_types *)EXTI_BASE_ADRESS))
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
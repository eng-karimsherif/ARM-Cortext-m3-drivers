/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 16th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H
/*******************************************************************************************/
/*
  objetive: NVIC peripheral base adresses  
*/
#define NVIC_BASE_ADRESS 0xE000E100
/*******************************************************************************************/
/*
  objetive: Register adresses defination
*/
#define NVIC_ISER0 *((volatile u32*) NVIC_BASE_ADRESS+0x000)
#define NVIC_ISER1 *((volatile u32*) NVIC_BASE_ADRESS+0x004)			 
#define NVIC_ICER0 *((volatile u32*) NVIC_BASE_ADRESS+0x080)
#define NVIC_ICER1 *((volatile u32*) NVIC_BASE_ADRESS+0x084)					
#define NVIC_ISPR0 *((volatile u32*) NVIC_BASE_ADRESS+0x100)
#define NVIC_ISPR1 *((volatile u32*) NVIC_BASE_ADRESS+0x104)					 
#define NVIC_ICPR0 *((volatile u32*) NVIC_BASE_ADRESS+0x180)
#define NVIC_ICPR1 *((volatile u32*) NVIC_BASE_ADRESS+0x184)					
#define NVIC_IABR0 *((volatile u32*) NVIC_BASE_ADRESS+0x200)
#define NVIC_IABR1 *((volatile u32*) NVIC_BASE_ADRESS+0x204)
#define NVIC_IPR ((volatile u8*) NVIC_BASE_ADRESS+0x300)
/*******************************************************************************************/
/* 
  objetive: define Priority options private macros access SCB_AIRCR
*/
#define MNVIC_GROUP_4_SUB_0      0x05FA0300
#define MNVIC_GROUP_3_SUB_1      0x05FA0400
#define MNVIC_GROUP_2_SUB_2      0x05FA0500
#define MNVIC_GROUP_1_SUB_3      0x05FA0600
#define MNVIC_GROUP_0_SUB_4      0x05FA0700
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
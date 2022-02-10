/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 6th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef SEV_SEG_CONFIG_H
#define SEV_SEG_CONFIG_H
/*******************************************************************************************/
/* 
  objective: select the type of seven segment
  options : 
           1- COMMON_CATHOD
           2- COMMON_ANODE  
*/
#define SEV_SEG_TYPE  COMMON_CATHOD
/*******************************************************************************************/
/*
  objective: setup the configuration of 7_SEG with STM32F103 (select the port used) 
  options : 
           1- GPIOA
           2- GPIOB
		   3- GPIOC 
*/
#define PORT_INTERFACE GPIOA
#define PORT_OUTPUT    GPIOA_ODR
/*******************************************************************************************/
/*
  objective: select the pins used
  options: 0 to 15 
*/
#define A_CONFIG  0
#define B_CONFIG  1
#define C_CONFIG  2
#define D_CONFIG  3
#define E_CONFIG  4
#define F_CONFIG  5
#define G_CONFIG  6
/*******************************************************************************************/
#endif
/*------------------------------------- code end ------------------------------------------*/
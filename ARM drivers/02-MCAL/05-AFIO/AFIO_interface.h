/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 19th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef AFIO_INTERFACE_H
#define AFIO_INTERFACE_H

/*******************************************************************************************/
/*
  objetive: function prototypes  
*/
void	MAFIO_voidSetEXTIConfiguration(u8 Copy_u8Line ,u8 Copy_u8PortMap);
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (pins in specific port)
*/
#define EXTI_PORTA  0b0000
#define EXTI_PORTB  0b0001
#define EXTI_PORTC  0b0010
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
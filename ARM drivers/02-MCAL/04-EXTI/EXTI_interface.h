/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 18th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

/*******************************************************************************************/
/*
  objetive: function prototypes  
*/
void MEXTI_voidInit(void);
void MEXTI_voidEnableEXTIRunTime (u8 copy_u8EXTILine , u8 copy_u8EXTISenseMode);
void MEXTI_voidDisableEXTI (u8 copy_u8EXTILine);
void MEXTI_voidSoftwareTrigger(u8 Copy_u8EXTILine);
void MEXTI_voidSetCallBack (void (*ptr) (void));
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (sense mode)
*/
#define		 FALLING_EDGE		0
#define		 RISING_EDGE		1
#define		 EDGE_CHANGE		2
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (external interrupt line)
*/
#define		 EXTI_LINE0			0
#define		 EXTI_LINE1			1
#define		 EXTI_LINE2			2
#define		 EXTI_LINE3			3
#define		 EXTI_LINE4			4
#define		 EXTI_LINE5			5
#define		 EXTI_LINE6			6
#define		 EXTI_LINE7			7
#define		 EXTI_LINE8			8
#define		 EXTI_LINE9			9
#define		 EXTI_LINE10		10
#define		 EXTI_LINE11	    11
#define		 EXTI_LINE12		12
#define		 EXTI_LINE13		13
#define		 EXTI_LINE14		14
#define		 EXTI_LINE15		15
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 19th Jan 2021 (ver2)
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

#include "AFIO_interface.h"
#include "AFIO_config.h"
#include "AFIO_private.h
/*******************************************************************************************/
/*
  objetive: function to choose EXTI pins in the used line using AFIO register
*/
void	MAFIO_voidSetEXTIConfiguration(u8 Copy_u8Line ,u8 Copy_u8PortMap)
{
	u8 Local_u8RegIndex =0;
	
	if (Copy_u8Line<=3){
		Local_u8RegIndex=0;
	}
	else if (Copy_u8Line<=7){
		Local_u8RegIndex=1;
		Copy_u8Line -= 4;
	}
	else if (Copy_u8Line<=11){
		Local_u8RegIndex=2;
		Copy_u8Line -= 8;
	}
	else if (Copy_u8Line<=15){
		Local_u8RegIndex=3;
		Copy_u8Line -= 12;
	}	
	
	MAFIO -> EXTICR[Local_u8RegIndex]  &= ~((0b1111) << (Copy_u8Line *4));
	MAFIO -> EXTICR[Local_u8RegIndex]  |= ((Copy_u8PortMap) << (Copy_u8Line *4));	
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/
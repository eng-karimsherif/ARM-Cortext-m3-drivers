/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 18th Jan 2021 (ver2)
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

#include "EXTI_interface.h"
#include "EXTI_config.h"
#include "EXTI_private.h
/*******************************************************************************************/
/*
  objetive: array of call back pointers to functions global init
*/
static void (*EXTI_call_back[16]) (void) = NULL ;

/*******************************************************************************************/
/*
  objetive: function to intialize EXTI used line and sense mode
*/
void MEXTI_voidInit(void)
{
	#if    EXTI_LINE == EXTI_LINE0
	       SET_BIT(MEXTI -> IMR , EXTI_LINE0);
	#elif  EXTI_LINE == EXTI_LINE1
           SET_BIT(MEXTI -> IMR , EXTI_LINE1);
	#elif  EXTI_LINE == EXTI_LINE2
	       SET_BIT(MEXTI -> IMR , EXTI_LINE2);
	#elif  EXTI_LINE == EXTI_LINE3
	       SET_BIT(MEXTI -> IMR , EXTI_LINE3);
	#elif  EXTI_LINE == EXTI_LINE4
	       SET_BIT(MEXTI -> IMR , EXTI_LINE4);
	#elif  EXTI_LINE == EXTI_LINE5
	       SET_BIT(MEXTI -> IMR , EXTI_LINE5);
	#elif  EXTI_LINE == EXTI_LINE6
	       SET_BIT(MEXTI -> IMR , EXTI_LINE6);
	#elif  EXTI_LINE == EXTI_LINE7
	       SET_BIT(MEXTI -> IMR , EXTI_LINE7);
	#elif  EXTI_LINE == EXTI_LINE8
	       SET_BIT(MEXTI -> IMR , EXTI_LINE8);
	#elif  EXTI_LINE == EXTI_LINE9
	       SET_BIT(MEXTI -> IMR , EXTI_LINE9);
	#elif  EXTI_LINE == EXTI_LINE10
	       SET_BIT(MEXTI -> IMR , EXTI_LINE10);
	#elif  EXTI_LINE == EXTI_LINE11
	       SET_BIT(MEXTI -> IMR , EXTI_LINE11);
	#elif  EXTI_LINE == EXTI_LINE12
	       SET_BIT(MEXTI -> IMR , EXTI_LINE12);
	#elif  EXTI_LINE == EXTI_LINE13
	       SET_BIT(MEXTI -> IMR , EXTI_LINE13);
	#elif  EXTI_LINE == EXTI_LINE14
	       SET_BIT(MEXTI -> IMR , EXTI_LINE14);
	#elif  EXTI_LINE == EXTI_LINE15
	       SET_BIT(MEXTI -> IMR , EXTI_LINE15);
	#end if 
	
	
	#if    EXTI_SENSE_MODE == RISING_EDGE
	       SET_BIT(EXTI -> RTSR , EXTI_LINE);
		   CLR_BIT(EXTI -> FTSR , EXTI_LINE);
	#elif  EXTI_SENSE_MODE == FALLING_EDGE
           SET_BIT(EXTI -> FTSR , EXTI_LINE);
		   CLR_BIT(EXTI -> RTSR , EXTI_LINE);
	#elif  EXTI_SENSE_MODE == EDGE_CHANGE
	       SET_BIT(EXTI -> FTSR , EXTI_LINE);
		   SET_BIT(EXTI -> RTSR , EXTI_LINE);
	#endif
}
/*******************************************************************************************/
/*
  objetive: function to edit EXTI used line and sense mode during runtime
*/
void MEXTI_voidEnableEXTIRunTime (u8 copy_u8EXTILine , u8 copy_u8EXTISenseMode)
{
	switch (copy_u8EXTISenseMode){
		RISING_EDGE  : SET_BIT(EXTI -> RTSR , copy_u8EXTILine);
		               CLR_BIT(EXTI -> FTSR , copy_u8EXTILine);break;
		FALLING_EDGE : SET_BIT(EXTI -> FTSR , copy_u8EXTILine);
		               CLR_BIT(EXTI -> RTSR , copy_u8EXTILine);break;
		EDGE_CHANGE  : SET_BIT(EXTI -> FTSR , copy_u8EXTILine);
		               SET_BIT(EXTI -> RTSR , copy_u8EXTILine);break;
	}
	
	SET_BIT(MEXTI -> IMR , copy_u8EXTILine);
}
/*******************************************************************************************/
/*
  objetive: function to disable EXTI line
*/
void MEXTI_voidDisableEXTI (u8 copy_u8EXTILine)
{
	CLR_BIT(EXTI -> IMR , Copy_u8EXTILine);
}
/*******************************************************************************************/
/*
  objetive: function to set SWI (software interrupt)
*/
void MEXTI_voidSoftwareTrigger(u8 Copy_u8EXTILine)
{
    SET_BIT(MEXTI -> SWIER , copy_u8EXTILine);
}
/*******************************************************************************************/
/*
  objetive: function used in calling back 
*/
void MEXTI_voidSetCallBack (u8 copy_u8EXTILine ,void (*ptr) (void))
{
	EXTI_call_back [copy_u8EXTILine] = ptr;
}
/*******************************************************************************************/
/*
  objetive: EXTI ISR implementation by using call back functions
*/
void EXTI0_IRQHandler (void)
{
	EXTI_call_back[0]();
	SET_BIT(EXTI -> PR , 0); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI1_IRQHandler (void)
{
	EXTI_call_back[1]();
	SET_BIT(EXTI -> PR , 1); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI2_IRQHandler (void)
{
	EXTI_call_back[2]();
	SET_BIT(EXTI -> PR , 2); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI3_IRQHandler (void)
{
	EXTI_call_back[3]();
	SET_BIT(EXTI -> PR , 3); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI4_IRQHandler (void)
{
	EXTI_call_back[4]();
	SET_BIT(EXTI -> PR , 4); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI5_IRQHandler (void)
{
	EXTI_call_back[5]();
	SET_BIT(EXTI -> PR , 5); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI6_IRQHandler (void)
{
	EXTI_call_back[6]();
	SET_BIT(EXTI -> PR , 6); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI7_IRQHandler (void)
{
	EXTI_call_back[7]();
	SET_BIT(EXTI -> PR , 7); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI8_IRQHandler (void)
{
	EXTI_call_back[8]();
	SET_BIT(EXTI -> PR , 8); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI9_IRQHandler (void)
{
	EXTI_call_back[9]();
	SET_BIT(EXTI -> PR , 9); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI10_IRQHandler (void)
{
	EXTI_call_back[10]();
	SET_BIT(EXTI -> PR , 10); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI11_IRQHandler (void)
{
	EXTI_call_back[11]();
	SET_BIT(EXTI -> PR , 11); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI12_IRQHandler (void)
{
	EXTI_call_back[12]();
	SET_BIT(EXTI -> PR , 12); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI13_IRQHandler (void)
{
	EXTI_call_back[13]();
	SET_BIT(EXTI -> PR , 13); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI14_IRQHandler (void)
{
	EXTI_call_back[14]();
	SET_BIT(EXTI -> PR , 14); // clear flag by writing 1 on it
}
/*-------------------------------------------------------------*/
void EXTI15_IRQHandler (void)
{
	EXTI_call_back[15]();
	SET_BIT(EXTI -> PR , 15); // clear flag by writing 1 on it
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/ 
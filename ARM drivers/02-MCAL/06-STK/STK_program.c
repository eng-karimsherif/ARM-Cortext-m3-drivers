/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 19th Jan 2021 (ver2)
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

#include "STK_interface.h"
#include "STK_config.h"
#include "STK_private.h
/*******************************************************************************************/
/* define the call back pointer to function */
static void (*MSTK_CallBack) (void);
/*******************************************************************************************/
/* Define Variable for interval mode */
static u8 MSTK_u8ModeOfInterval;
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
void MSTK_voidInit (void)
{
	#define MSTK_CLK_SRC == MSTK_SRC_AHB_8
	     MSTK -> CTRL = 0x00000000; // disable STK + disable STK interrupt + source is AHB/8
	
	#elif MSTK_CLK_SRC == MSTK_SRC_AHB
	     MSTK -> CTRL = 0x00000004; // disable STK + disable STK interrupt + source is AHB
	
	#endif
}
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
void MSTK_SetBusyWait (u32 copy_u32Ticks )
{
	MSTK -> LOAD = copy_u32Ticks; // load ticks to LOAD register
	SET_BIT(MSTK -> CTRL,ENABLE); // enable STK timer
	while ((GET_BIT(MSTK -> CTRL,COUNTFLAG)) == 0); // wait till the flag is raised
	/* stop the timer */
	CLR_BIT(MSTK -> CTRL,ENABLE);
	MSTK -> LOAD = 0;
	MSTK -> VAL = 0;	
}
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
void MSTK_voidSetIntervalSingle (u32 copy_u32Ticks , void (*copy_ptr)(void))
{
	 /* stop the timer */
	/*CLR_BIT(MSTK -> CTRL,ENABLE);
	CLR_BIT(MSTK -> CTRL,TICKINT);
	MSTK -> LOAD = 0;
	MSTK -> VAL = 0; */ // lec14 -45:00
	
	MSTK -> LOAD = copy_u32Ticks; // load ticks to LOAD register
	SET_BIT(MSTK -> CTRL,ENABLE); // enable STK timer
	MSTK_CallBack = copy_ptr;     // save the call back function 
	MSTK_u8ModeOfInterval = MSTK_SINGLE_MODE  //set the single mode
	SET_BIT(MSTK -> CTRL,TICKINT); // enable STK interrupt
}
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
void MSTK_voidSetIntervalPeriodic (u32 copy_u32Ticks , void (*copy_ptr)(void))
{
	MSTK -> LOAD = copy_u32Ticks; // load ticks to LOAD register
	SET_BIT(MSTK -> CTRL,ENABLE); // enable STK timer
	MSTK_CallBack = copy_ptr;     // save the call back function 
	MSTK_u8ModeOfInterval = MSTK_PERIDOC_MODE  //set the periodic mode
	SET_BIT(MSTK -> CTRL,TICKINT); // enable STK interrupt
}
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
void MSTK_Stop_Interval (void)
{
	/* stop the timer */
	CLR_BIT(MSTK -> CTRL,ENABLE);
	CLR_BIT(MSTK -> CTRL,TICKINT);
	MSTK -> LOAD = 0;
	MSTK -> VAL = 0;
}
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
u32  MSTK_u32GetElapsedTime(void)
{
	u32 Local_u32ElapsedTime;
	Local_u32ElapsedTime = (MSTK -> LOAD) - (MSTK -> VAL);
	return Local_u32ElapsedTime;
}
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
u32  MSTK_u32GetRemainingTime(void)
{
	u32 Local_u32RemainingTime;
	Local_u32RemainingTime = (MSTK -> VAL);
	return Local_u32RemainingTime;	
}
/*******************************************************************************************/
/*
  objetive: function to intialized the clock system 
*/
void SysTick_Handler (void)
{
	u8 Local_u8ReadFlag ;
	
	if (MSTK_u8ModeOfInterval = MSTK_SINGLE_MODE)
	{
	/* stop the timer */
	CLR_BIT(MSTK -> CTRL,ENABLE);
	CLR_BIT(MSTK -> CTRL,TICKINT);
	MSTK -> LOAD = 0;
	MSTK -> VAL = 0;
	}
	
	/* Callback notification */
	MSTK_CallBack();
	
	/* Clear interrupt flag by reading it*/
	Local_u8ReadFlag = GET_BIT(MSTK->CTRL,16);
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/
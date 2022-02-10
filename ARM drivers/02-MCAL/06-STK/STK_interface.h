/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 19th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H
/*******************************************************************************************/
/*
  objetive: function prototypes  
*/
void MSTK_voidInit (void);
void MSTK_SetBusyWait (u32 copy_u32Ticks );
void MSTK_voidSetIntervalSingle (u32 copy_u32Ticks , void (*copy_ptr)(void));
void MSTK_voidSetIntervalPeriodic (u32 copy_u32Ticks , void (*copy_ptr)(void));
void MSTK_Stop_Interval (void);
u32  MSTK_u32GetElapsedTime(void);
u32  MSTK_u32GetRemainingTime(void);
/*******************************************************************************************/
#endif
/*------------------------------------- code end ------------------------------------------*/
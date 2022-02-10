/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 19th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/

#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H
/*******************************************************************************************/
typedef struct {
	volatile u32 CTRL;
	volatile u32 LOAD;
	volatile u32 VAL ;
}STK_types;

#define MSTK  ((STK_types*)0xE000E010)
/* to access LOAD register for example MSTK -> LOAD */
/*******************************************************************************************/
#define MSTK_SRC_AHB     0
#define MSTK_SRC_AHB_8	 1
/*******************************************************************************************/
/* CTRL register bits defination */
#define ENABLE           0
#define TICKINT       	 1
#define CLKSOURCE        2
#define COUNTFLAG	     16
/*******************************************************************************************/
/* modes of intervals */
#define MSTK_SINGLE_MODE          0
#define MSTK_PERIODIC_MODE        1
/*******************************************************************************************/
#endif
/*------------------------------------- code end ------------------------------------------*/
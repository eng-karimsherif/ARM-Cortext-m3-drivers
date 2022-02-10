/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 5th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef BIT_MATH_H
#define BIT_MATH_H

/*******************************************************************************************/
/*
  objetive: defination of bits operation   
*/
#define SET_BIT(VAR,BIT) VAR|=(1<<(BIT))
#define CLR_BIT(VAR,BIT) VAR&=~(1<<(BIT))
#define GET_BIT(VAR,BIT) (1&(VAR>>BIT))
#define TOG_BIT(VAR,BIT) VAR^=(1<<(BIT))
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
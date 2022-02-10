/***************************************************/
// author: karim sherif lotfy
// date: 6th Jan 2021 
// model: STM32F103 (ARM cortex M3)
// version : V01
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H
/*******************************************************************************************/
/*
  objetive: function prototypes  
*/
void LED_voidInit(u8 copy_u8Port,u8 copy_u8Pin);
void LED_voidOn(u8 copy_u8Port,u8 copy_u8Pin);
void LED_voidOff(u8 copy_u8Port,u8 copy_u8Pin);
void LED_voidToggle(u8 copy_u8Port,u8 copy_u8Pin);
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
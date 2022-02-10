/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 6th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/*******************************************************************************************/
/*
  objetive: function prototypes  
*/
void MGPIO_voidSetPinDirection (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8Mode);
void MGPIO_voidSetPinValue (u8 copy_u8Port,u8 copy_u8Pin,u8 copy_u8Value);
u8 MGPIO_voidGetPinValue (u8 copy_u8Port,u8 copy_u8Pin);
void MGPIO_voidSimpleSetPinValue (u8 copy_u8Port,u8 copy_u8Pin);
void MGPIO_voidSimpleResetPinValue (u8 copy_u8Port,u8 copy_u8Pin);
/*******************************************************************************************/
/*
  objetive: define voltage logic levels
*/
#define HIGH 1
#define LOW  0
/*******************************************************************************************/
/*
objetive: define GPIO ports peripherals
*/
#define GPIOA  0
#define GPIOB  1
#define GPIOC  2
/*******************************************************************************************/
/*
objetive: define GPIO pins
*/
#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7
#define PIN8   8
#define PIN9   9
#define PIN10  10
#define PIN11  11
#define PIN12  12
#define PIN13  13
#define PIN14  14
#define PIN15  15
/*******************************************************************************************/ 
/* 
  objetive: Input PIN modes  
*/ 
#define INPUT_ANLOG              0b0000
#define INPUT_FLOATING           0b0100
#define INPUT_PULLUP_PULLDOWN    0b1000
/*******************************************************************************************/
/* 
  objetive: Output PIN modes  (10MHz)
*/ 
#define OUTPUT_SPEED_10MHZ_PP    0b0001
#define OUTPUT_SPEED_10MHZ_OD    0b0101
#define OUTPUT_SPEED_10MHZ_AFPP  0b1001
#define OUTPUT_SPEED_10MHZ_AFOD  0b1101
/*******************************************************************************************/
/* 
  objetive: Output PIN modes  (2MHz)
*/ 
#define OUTPUT_SPEED_2MHZ_PP     0b0010
#define OUTPUT_SPEED_2MHZ_OD     0b0110
#define OUTPUT_SPEED_2MHZ_AFPP   0b1010
#define OUTPUT_SPEED_2MHZ_AFOD   0b1110
/*******************************************************************************************/
/* 
  objetive: Output PIN modes  (50MHz)
*/ 
#define OUTPUT_SPEED_50MHZ_PP    0b0011
#define OUTPUT_SPEED_50MHZ_OD    0b0111
#define OUTPUT_SPEED_50MHZ_AFPP  0b1011
#define OUTPUT_SPEED_50MHZ_AFOD  0b1111
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
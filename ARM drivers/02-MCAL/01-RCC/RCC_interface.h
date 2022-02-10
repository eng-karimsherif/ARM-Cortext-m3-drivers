/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 5th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H
/*******************************************************************************************/
/*
  objetive: function prototypes  
*/
void RCC_voidInitSysClock (void);
void RCC_voidEnableClock (u8 copy_u8BusId,u8 copy_u8PerId);
void RCC_voidDisableClock (u8 copy_u8BusId,u8 copy_u8PerId);
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (peripherals communication protocols)
*/
#define RCC_AHP   0
#define RCC_APB1  1
#define RCC_APB2  2
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (AHB peripherals)
*/
#define RCC_AHP_DMA1   0
#define RCC_AHP_DMA2   1
#define RCC_AHP_SRAM   2
#define RCC_AHP_FLITF  4
#define RCC_AHP_CRCE   6
#define RCC_AHP_FSMC   8
#define RCC_AHP_SDIO   10
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (APB2 peripherals)
*/
#define RCC_APB2_AFIO   0
#define RCC_APB2_IOPA   2
#define RCC_APB2_IOPB   3
#define RCC_APB2_IOPC   4
#define RCC_APB2_IOPD   5
#define RCC_APB2_IOPE   6
#define RCC_APB2_IOPF   7
#define RCC_APB2_IOPG   8
#define RCC_APB2_ADC1   9
#define RCC_APB2_ADC2   10
#define RCC_APB2_TIM1   11
#define RCC_APB2_SPI1   12
#define RCC_APB2_TIM8   13
#define RCC_APB2_USART1 14
#define RCC_APB2_ADC3   15
#define RCC_APB2_TIM9   19
#define RCC_APB2_TIM10  20
#define RCC_APB2_TIM11  21
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (APB1 peripherals)
*/
#define RCC_APB1_TIM2    0
#define RCC_APB1_TIM3    1
#define RCC_APB1_TIM4    2
#define RCC_APB1_TIM5    3
#define RCC_APB1_TIM6    4
#define RCC_APB1_TIM7    5
#define RCC_APB1_TIM12   6
#define RCC_APB1_TIM13   7
#define RCC_APB1_TIM14   8
#define RCC_APB1_WWDGEN  11
#define RCC_APB1_SPI2    14
#define RCC_APB1_SPI3    15
#define RCC_APB1_USART2  17
#define RCC_APB1_USART3  18
#define RCC_APB1_USART4  19
#define RCC_APB1_USART5  20
#define RCC_APB1_I2C1    21
#define RCC_APB1_I2C2    22
#define RCC_APB1_USB     23
#define RCC_APB1_CAN     25
#define RCC_APB1_BKP     27
#define RCC_APB1_PWR     28
#define RCC_APB1_DAC     29
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
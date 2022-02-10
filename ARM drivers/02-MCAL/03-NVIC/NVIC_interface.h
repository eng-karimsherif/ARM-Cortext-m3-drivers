/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 16th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

/*******************************************************************************************/
/*
  objetive: function prototypes  
*/
void MNVIC_voidInit (void);
void MNVIC_voidEnableInterrupt (u8 copy_u8IntNumber);
void MNVIC_voidDisableInterrupt (u8 copy_u8IntNumber);
void MNVIC_voidSetPendingFlag (u8 copy_u8IntNumber);
void MNVIC_voidClearPendingFlag (u8 copy_u8IntNumber);
u8 MNVIC_u8GetActiveFlag (u8 copy_u8IntNumber);
void MNVIC_SetPriority (u8 copy_u8IntNumber , u8 copy_u8priority );
/*******************************************************************************************/
/*
  objetive: define macros for function's arguments (NVIC intterupts)
*/
#define NVIC_WWDG             0
#define NVIC_PVD              1
#define NVIC_TAMPER           2
#define NVIC_RTC              3
#define NVIC_FLASH            4
#define NVIC_RCC              5
#define NVIC_EXTI0            6
#define NVIC_EXTI1            7
#define NVIC_EXTI2            8
#define NVIC_EXTI3            9
#define NVIC_EXTI4            10
#define NVIC_DMA1_CHANNEL1    11
#define NVIC_DMA1_CHANNEL2    12
#define NVIC_DMA1_CHANNEL3    13
#define NVIC_DMA1_CHANNEL4    14
#define NVIC_DMA1_CHANNEL5    15
#define NVIC_DMA1_CHANNEL6    16
#define NVIC_DMA1_CHANNEL7    17
#define NVIC_ADC1_2           18
#define NVIC_USB_HP_CAN_TX    19
#define NVIC_USB_LP_CAN_RX0   20
#define NVIC_CAN_RX1          21
#define NVIC_CAN_SCE          22
#define NVIC_EXTI9_5          23
#define NVIC_TIM1_BRK         24
#define NVIC_TIM1_UP          25
#define NVIC_TIM1_TRG_COM     26
#define NVIC_TIM1_CC          27
#define NVIC_TIM2             28
#define NVIC_TIM3             29
#define NVIC_TIM4             30
#define NVIC_I2C1_EV          31
#define NVIC_I2C1_ER          32
#define NVIC_I2C2_EV          33
#define NVIC_I2C2_ER          34
#define NVIC_SPI1             35
#define NVIC_SPI2             36
#define NVIC_USART1           37
#define NVIC_USART2           38
#define NVIC_USART3           39
#define NVIC_EXTI15_10        40
#define NVIC_RTCAlarm         41
#define NVIC_USBWakeup        42
#define NVIC_TIM8_BRK         43
#define NVIC_TIM8_UP          44
#define NVIC_TIM8_TRG_COM     45
#define NVIC_TIM8_CC          46
#define NVIC_ADC3             47
#define NVIC_FSMC             48
#define NVIC_SDIO             49
#define NVIC_TIM5             50
#define NVIC_SPI3             51
#define NVIC_UART4            52
#define NVIC_UART5            53
#define NVIC_TIM6             54
#define NVIC_TIM7             55
#define NVIC_DMA2_CHANNEL1    56
#define NVIC_DMA2_CHANNEL2    57
#define NVIC_DMA2_CHANNEL3    58
#define NVIC_DMA2_CHANNEL4_5  59
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 18th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef EXTI_CONFIG_H
#define EXTI_CONFIG_H
/*******************************************************************************************/
/* 
  objective : set the external interrupt line 
  options :  
            EXTI_LINE0	
            EXTI_LINE1	
            EXTI_LINE2	
            EXTI_LINE3	
            EXTI_LINE4	
            EXTI_LINE5	
            EXTI_LINE6	
            EXTI_LINE7	
            EXTI_LINE8	
            EXTI_LINE9	
            EXTI_LINE10
            EXTI_LINE11
            EXTI_LINE12
            EXTI_LINE13
            EXTI_LINE14
            EXTI_LINE15 
*/							 
#define    EXTI_LINE    EXTI_LINE0	
/*******************************************************************************************/
/* 
  objective : set the interrupt sense mode 
  options :
            RISING_EDGE
            FALLING_EDGE
		    EDGE_CHANGE 
*/								  
#define    EXTI_SENSE_MODE    RISING_EDGE
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/ 											 
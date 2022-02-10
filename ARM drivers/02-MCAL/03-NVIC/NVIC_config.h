/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 16th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef NVIC_CONFIG_H
#define NVIC_CONFIG_H

/*******************************************************************************************/
/*
 objective :choose the division of priority register for each interrupt 
 options : MNVIC_GROUP_4_SUB_0
           MNVIC_GROUP_3_SUB_1
		   MNVIC_GROUP_2_SUB_2
		   MNVIC_GROUP_1_SUB_3
		   MNVIC_GROUP_0_SUB_4 
*/ 
#define MNVIC_GROUP_SUB_DISTRIBUTION   MNVIC_GROUP_2_SUB_2
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
/***************************************************/
// author: karim sherif lotfy
// date: 14th oct 2020 (ver1) / 19th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef AFIO_PRIVATE_H
#define AFIO_PRIVATE_H
/*******************************************************************************************/
/*
  objetive: AFIO peripheral base adresses  
*/
#define AFIO_BASE_ADRESS 0x40010000
/*******************************************************************************************/
/*
  objetive: Register adresses defination
*/
typedef struct {
	volatile u32 EVCR;
	volatile u32 MAPR;
	volatile u32 EXTICR[4];
	volatile u32 MAPR2;
}AFIO_types;

#define MAFIO  ((AFIO_types*) AFIO_BASE_ADRESS) 
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 6th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
#ifndef SEV_SEG_PRIVATE_H
#define SEV_SEG_PRIVATE_H
/*******************************************************************************************/
/*
  objetive: private defination used in 7-segment interface functions  
*/							 
#define A(x) if (x==0) CLR_BIT(PORT_OUTPUT,A_CONFIG); else SET_BIT(PORT_OUTPUT,A_CONFIG);
#define B(x) if (x==0) CLR_BIT(PORT_OUTPUT,B_CONFIG); else SET_BIT(PORT_OUTPUT,B_CONFIG);
#define C(x) if (x==0) CLR_BIT(PORT_OUTPUT,C_CONFIG); else SET_BIT(PORT_OUTPUT,C_CONFIG);
#define D(x) if (x==0) CLR_BIT(PORT_OUTPUT,D_CONFIG); else SET_BIT(PORT_OUTPUT,D_CONFIG);
#define E(x) if (x==0) CLR_BIT(PORT_OUTPUT,E_CONFIG); else SET_BIT(PORT_OUTPUT,E_CONFIG);
#define F(x) if (x==0) CLR_BIT(PORT_OUTPUT,F_CONFIG); else SET_BIT(PORT_OUTPUT,F_CONFIG);
#define G(x) if (x==0) CLR_BIT(PORT_OUTPUT,G_CONFIG); else SET_BIT(PORT_OUTPUT,G_CONFIG);
/*******************************************************************************************/
/*
  objetive: define 7-segment types private macros  
*/	
#define COMMOM_CATHOD 0
#define COMMON_ANODE  1
/*******************************************************************************************/

#endif
/*------------------------------------- code end ------------------------------------------*/
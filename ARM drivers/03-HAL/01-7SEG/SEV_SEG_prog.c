/***************************************************/
// author: karim sherif lotfy
// date: 3rd oct 2020 (ver1) / 6th Jan 2021 (ver2)
// model: STM32F103 (ARM cortex M3)
// version : V02
/***************************************************/

/*------------------------------------ code start -----------------------------------------*/
/*******************************************************************************************/
/*
  objetive: including List  
*/
// library including
#include "BIT_MATH.h"
#include "STD_TYPES.h"
// MCAL h files including
#include "GPIO_interface.h"
#include "GPIO_config.h"
#include "GPIO_private.h"
// HAL h files including
#include "SEV_SEG_interface.h"
#include "SEV_SEG_config.h"
#include "SEV_SEG_private.h"
/*******************************************************************************************/
/*
  objetive: function to intialize pins connected with 7-segment display  
*/
void SEVENSEG_voidInit (void)
{
	MGPIO_voidSetPinDirection(PORT_INTERFACE,A_CONFIG,OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(PORT_INTERFACE,B_CONFIG,OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(PORT_INTERFACE,C_CONFIG,OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(PORT_INTERFACE,D_CONFIG,OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(PORT_INTERFACE,E_CONFIG,OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(PORT_INTERFACE,F_CONFIG,OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(PORT_INTERFACE,G_CONFIG,OUTPUT_SPEED_10MHZ_PP);
}
/*******************************************************************************************/
/*
  objetive: function to inteface with 7-segment  
*/
/*      A   B   C   D   E   F   G
------------------------------------------
   0  |1  |1  |1  |1  |1  |1  |0  |
   1  |0  |1  |1  |0  |0  |0  |0  |
   2  |1  |1  |0  |1  |1  |0  |1  |
   3  |1  |1  |1  |1  |0  |0  |1  |
   4  |0  |1  |1  |0  |0  |1  |1  |
   5  |1  |0  |1  |1  |0  |1  |1  |
   6  |1  |0  |1  |1  |1  |1  |1  |
   7  |1  |1  |1  |0  |0  |0  |0  |
   8  |1  |1  |1  |1  |1  |1  |1  |
   9  |1  |1  |1  |1  |0  |1  |1  |
   */
   
void SEVENSEG_voidWriteDigit (u8 copy_u8Num )
{
    #if SEV_SEG_TYPE == COMMON_CATHOD
	    switch(copy_u8Num){
		case 0: A(1); B(1); C(1); D(1); E(1); F(1); G(0); break;
		case 1: A(0); B(1); C(1); D(0); E(0); F(0); G(0); break;
		case 2: A(1); B(1); C(0); D(1); E(1); F(0); G(1); break;
		case 3: A(1); B(1); C(1); D(1); E(0); F(0); G(1); break;
		case 4: A(0); B(1); C(1); D(0); E(0); F(1); G(1); break;
		case 5: A(1); B(0); C(1); D(1); E(0); F(1); G(1); break;
		case 6: A(1); B(0); C(1); D(1); E(1); F(1); G(1); break;
		case 7: A(1); B(1); C(1); D(0); E(0); F(0); G(0); break;
		case 8: A(1); B(1); C(1); D(1); E(1); F(1); G(1); break;
		case 9: A(1); B(1); C(1); D(1); E(0); F(1); G(1); 
	}
	
	#elif SEV_SEG_TYPE == COMMON_ANODE
		switch(copy_u8Num){
		case 0: A(0); B(0); C(0); D(0); E(0); F(0); G(1); break;
		case 1: A(1); B(0); C(0); D(1); E(1); F(1); G(1); break;
		case 2: A(0); B(0); C(1); D(0); E(0); F(1); G(0); break;
		case 3: A(0); B(0); C(0); D(0); E(1); F(1); G(0); break;
		case 4: A(1); B(0); C(0); D(1); E(1); F(0); G(0); break;
		case 5: A(0); B(1); C(0); D(0); E(1); F(0); G(0); break;
		case 6: A(0); B(1); C(0); D(0); E(0); F(0); G(0); break;
		case 7: A(0); B(0); C(0); D(1); E(1); F(1); G(1); break;
		case 8: A(0); B(0); C(0); D(0); E(0); F(0); G(0); break;
		case 9: A(0); B(0); C(0); D(0); E(1); F(0); G(0); 
	}
	#endif
}
/*******************************************************************************************/
/*------------------------------------- code end ------------------------------------------*/
/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: ahmed
 */
#include "Types.h"
#include "delay.h"
/*
typedef struct
	{
			u8 Bit0:1 ;
			u8 Bit1:1 ;
			u8 Bit2:1 ;
			u8 Bit3:1 ;
			u8 Bit4:1 ;
			u8 Bit5:1 ;
			u8 Bit6:1 ;
			u8 Bit7:1 ;
	}Reg;

#define PORTB		(*(volatile Reg *) 0x38)
*/
///*
#define PORTB		(*(volatile Reg *) 0x38)
#define PoRTB		(*(volatile u8 *) 0x38)

typedef struct
	{
			u8 Bit0:1 ;
			u8 Bit1:1 ;
			u8 Bit2:1 ;
			u8 Bit3:1 ;
			u8 Bit4:1 ;
			u8 Bit5:1 ;
			u8 Bit6:1 ;
			u8 Bit7:1 ;
	}Reg;
//*/

///*
int main (void)
	{
		while(1)
		{
			PORTB.Bit2=1;
			Delay_ms_Max1s(1000);
			PORTB.Bit5=1;
			Delay_ms_Max1s(1000);
			PoRTB=0x00;
			Delay_ms_Max1s(1000);
		}
		return 0;
	}
//*/
/*
typedef union
	{
			struct
			{
			u8 Bit0:1 ;
			u8 Bit1:1 ;
			u8 Bit2:1 ;
			u8 Bit3:1 ;
			u8 Bit4:1 ;
			u8 Bit5:1 ;
			u8 Bit6:1 ;
			u8 Bit7:1 ;
			};
			//u8 *ptr;
	}Reg;
#define PORTB		(*(volatile Reg *) 0x38)
#define PORTB_Bit0	PORTB.Bit0
#define PORTB_Bit1	PORTB.Bit1
#define PORTB_Bit2	PORTB.Bit2
#define PORTB_Bit3	PORTB.Bit3
#define PORTB_Bit4	PORTB.Bit4
#define PORTB_Bit5	PORTB.Bit5
#define PORTB_Bit6	PORTB.Bit6
#define PORTB_Bit7	PORTB.Bit7

//#define PORTB (*(volatile u8 *) 0x38)

int main (void)
{
    PORTB_Bit0 = 0;
	PORTB_Bit1 = 1;
	PORTB_Bit2 = 0;
	PORTB_Bit3 = 1;
	PORTB_Bit4 = 1;
	PORTB_Bit5 = 1;
	return 0;
}
*/

/*
typedef union    // Generic 8-bit register Type
{
  u8 reg; // Whole register
  struct
  {
    u8 Bit0:1 ;
    u8 Bit1:1 ;
    u8 Bit2:1 ;
    u8 Bit3:1 ;
    u8 Bit4:1 ;
    u8 Bit5:1 ;
    u8 Bit6:1 ;
    u8 Bit7:1 ;
  } ;
} type_REG8;

#define PORTA   (*(volatile type_REG8 *)(0x3B)) // Number is address

int main (void)
	{
		PORTA.Bit0 = 1; // Set pin high
		*/
		/*
		#ifdef	PORTA
		#undef PORTA
		#define PORTA 	*((volatile u8*)0x3B)
		#endif
		*/
		//PORTA.reg = 0xF0; // All pins high
		//return 0;
	//}


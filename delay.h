/*
 * delay.h
 
 */

#include "delay_config.h"

#ifndef DELAY_H_
#define DELAY_H_
/*
#define Delay_ms(count)  do{u32 k,i;\
	              for(k=count/8;k>0;k--)\
				  {\
                  for(i=Delay_u32SystemClock;i>0;i--)\
                  {\
	              __asm__("NOP");\
                  }\
                  }\
                  }while(0)
*/
#define Delay_ms_Max1s(count)  do{u32 i;\
	              for(i=((count*4000UL)/8);i>0;i--)\
                  {\
	            	  __asm__("NOP");\
                  }\
                  }while(0)



#endif /* DELAY_H_ */

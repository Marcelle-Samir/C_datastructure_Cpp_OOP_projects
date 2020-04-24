#include "stdio.h"

#define avr 1
#define arm 2
#define ecu 88



void main()
{
	
	#if ecu == avr
		printf("i am avr");
		
	#elif ecu == arm
		printf("i am arm");
	#else
		#error "you didn't choose man!"
		printf("i said you didnt choose !!");
	#endif
	
	
	
	
}
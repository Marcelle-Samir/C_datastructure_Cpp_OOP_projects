#include <stdio.h>
#include "std_types.h"

typedef union
{
	u8 x;
	u16 y;
	u32 z;
}name;


void main()
{
	name obj;
	obj.y |= 1<<7;
	obj.x |= 1;
	obj.z |= 1<<18;
	
	//obj.z=0;
	
	printf("y=%d\nx=%d\nz=%d\n",obj.x,obj.y,obj.z);
	
}
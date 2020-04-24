#include <stdio.h>
#define CHAR 	0
#define INT 	1
#define FLOAT 	2
#define DOUBLE 	3

#define PLUS		0
#define MINUS		1
#define MULT		2
#define DIV			3


void* calc(void *x, void *y, int flag,int op);
void main()
{
	
	/*void *ptr;
	int x=5;									CASTING
	float y=8;									VOID
	ptr= (int *) &x;							POINTER
	printf("%d",*(int *)ptr);					TO
	ptr= (float*) &y;							ANY
	printf("%f",*(float*)ptr);*/		      //DATATYPE
	
	char 	x1=5,y1=5; 		  char* res1;
	int 	x2=24,y2=6; 		int* res2;
	float 	x3=3.5,y3=4.5;	  float* res3;
	double	x4=5.8,y4=4.7;	 double* res4;
	
	
	res1=(char*)calc((void*)&x1,(void*)&y1,CHAR,MULT);
	printf("%d\n",*res1);
	
	res2=(int*)calc((void*)&x2,(void*)&y2,INT,PLUS);
	printf("%d\n",*res2);
	
	res3=(float*)calc((void*)&x3,(void*)&y3,FLOAT,MINUS);
	printf("%f\n",*res3);
	
	res4=(double*)calc((void*)&x4,(void*)&y4,DOUBLE,DIV);
	printf("%f\n",*res4);
	
	
	
	
	
}


void* calc(void *x, void *y, int flag,int op)
{
	static char   result1;
	static int    result2;
	static float  result3;
	static double result4;
	
	if(flag==0) 
	{
		switch(op)
		{
			case 0:
			result1= (*(char*)x+*(char*)y);
			break;
			case 1:
			result1= (*(char*)x-*(char*)y);
			break;
			case 2:
			result1= (*(char*)x**(char*)y);
			break;
			case 3:
			result1= ((*(char*)x)/(*(char*)y));
			break;
		}
		return (void*)&result1;
	}
	else if(flag==1)
	{
switch(op)
		{
			case 0:
			result2=(*(int*)x+*(int*)y);
			break;
			case 1:
			result2= (*(int*)x-*(int*)y);
			break;
			case 2:
			result2= (*(int*)x**(int*)y);
			break;
			case 3:
			result2= ((*(int*)x)/(*(int*)y));
			break;
		}	
			return (void*)&result2;
	}
	
else if(flag==2)
	{
switch(op)
		{
			case 0:
			result3=(*(float*)x+*(float*)y);
			break;
			case 1:
			result3= (*(float*)x-*(float*)y);
			break;
			case 2:
			result3= (*(float*)x**(float*)y);
			break;
			case 3:
			result3= ((*(float*)x)/(*(float*)y));
			break;
		}	
			return (void*)&result3;
	}	
			
	else if(flag==3)
	{
switch(op)
		{
			case 0:
			result4=(*(double*)x+*(double*)y);
			break;
			case 1:
			result4= (*(double*)x-*(double*)y);
			break;
			case 2:
			result4= (*(double*)x**(double*)y);
			break;
			case 3:
			result4= ((*(double*)x)/(*(double*)y));
			break;
		}	
			return (void*)&result4;
	}	
	
}
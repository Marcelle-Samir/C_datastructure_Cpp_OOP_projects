#include <stdio.h>


void printt(void);
int* sum(int x,int y);
int summ;

void main()
{
	
	
	int z=80,k=40,*f;
	void(*ptr)(void)=printt;
	ptr();
	
	/*int(*ptrr)(int,int)=(int (*)(int,int) )  sum;  ///castpointer--elpointer byshawer 3ala eh
	f=ptrr(z,k);
	printf("%d",*f);*/
	
	int*(*ptrr)(int,int);
	ptrr=sum;										//GHAREEB I <3 YOU !!
	f=ptrr(z,k);
	printf("%d",*f);
	
}


void printt(void)
{
printf("Call me from the pointer to function please :)\n");		
}

int* sum(int x,int y)
{
	int *p = &summ;
	*p=x+y;
	return p;	
}
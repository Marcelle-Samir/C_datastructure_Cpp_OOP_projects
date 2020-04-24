#include <stdio.h>


int sum(int x,int y);

void main()
{
	
	int z;
	float y=3.14;
	void *p;
	p=sum;
	z=(*(int(*)(int,int))p)(3,5);
	printf("%d\n",z);
	p=&y;
	printf("%f",(*(float*)p));
	
}

int sum(int x,int y)
{
	
	return x+y;
}
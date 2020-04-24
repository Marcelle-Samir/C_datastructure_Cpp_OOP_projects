#include <stdio.h>

void change(char *arr, int size);


void main()
{
	char x[19]="My Name Is Skrillex";
	
	change(x,sizeof(x)/sizeof(x[0]));
	
	printf("%s",x);
	
}


void change(char *arr, int size)
{
	int j=size-1;
	char temp;
	
	for(int i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
	
}
#include <stdio.h>


int ReturnOddRepeating(int *arr,int size);

void main()
{
	int x;
	int array[]={1,2,3,4,5,1,2,3,4,5,5,4,3,2,1,2,4,3,1};
	x=ReturnOddRepeating(array,19);
	printf("The number that is repeated odd time is %d",x);	
}

int ReturnOddRepeating(int *arr,int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		temp=temp^arr[i];
	}
	return temp;
	
}
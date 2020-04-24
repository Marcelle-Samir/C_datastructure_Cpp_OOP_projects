#include<stdio.h>
#include<conio.h>
#define M 6
void swap(int *A, int *B);
void bubble_sort(int *arr, int N);
void main()
  {
   int arr[M];
   int i;
   clrscr();
   printf("please enter your elements\n");
for(i=0; i<M; i++)
scanf("%d", &arr[i]);
bubble_sort(arr, M);
for(i=0; i<M; i++)
printf("%d \t", arr[i]);
getch();
  }
void bubble_sort(int *arr, int N)
  {
  int i, j, sorted=0;
  for(i=0; i<(N-1)&&(!sorted); i++)
	{
	  sorted=1;
	  for(j=(N-1); j>i; j--)
		{
		if(arr[j]<arr[j-1])
		  {
		  swap(&arr[j], &arr[j-1]);
		  sorted=0;
		  }
		}
	}
  }
void swap(int *A, int *B){
int temp;
temp= *A;
*A = *B;
*B= temp;
}
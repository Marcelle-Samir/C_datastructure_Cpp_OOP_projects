#include<stdio.h>
#include<conio.h>
#define M 6
void selection_sorting(int *arr, int N);
void swap(int *A, int *B);
void main()
  {
int arr[M];
int i;
clrscr();
printf("please enter your elements\n");
for(i=0; i<M; i++)
scanf("%d", &arr[i]);

selection_sorting(arr, 6);
getch();
  }
void selection_sorting(int *arr, int N)
  {
  int i, j, index;

  for(i=0; i<(N-1); i++)
	{   index= i;
	 for(j=(i+1); j<N; j++)
	   {
		 if(arr[j]<arr[index])
		 index=j;
	   }
	   swap(&arr[i], &arr[index]);
	}
	for(i=0; i<M; i++)
   printf("%d\t", arr[i]);
  }
void swap(int *A, int *B){
int temp;
temp= *A;
*A = *B;
*B= temp;
}
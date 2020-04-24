#include <stdio.h>
#include <conio.h>
void readarr (int *iarr, int size);
void printarr (int *iarr, int size);
void main(){
int arr[5];
clrscr();
printf("enter arr elements \n");
readarr (arr, 5);
printf("your arr is \n");
printarr (arr, 5);
getch();
}

void readarr (int *iarr, int size){
int i;
for(i=0; i<size; i++)

  scanf("%d", iarr+i);
}
void printarr (int *iarr, int size){
int k;
for(k=0; k<size; k++)
  printf("%d ", *(iarr+k));
}
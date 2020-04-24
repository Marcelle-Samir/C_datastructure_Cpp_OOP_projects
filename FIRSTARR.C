#include<conio.h>
#include<stdio.h>
#define j 6
void main()
{
 int arr[j];
 int i,k;
 clrscr();
 for(i=0; i<j; i++){
 printf("please enter an integer element\n");
 scanf("%d",&arr[i]);
 }
 for(k=0; k<j; k++){
 printf("%d \n",arr[k]);
 }
 getch();
 }
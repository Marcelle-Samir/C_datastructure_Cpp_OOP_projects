#include<conio.h>
#include<stdio.h>
#define j 6
void main()
{
 int arr[j];
 int i,k, max=0, min=0;
 clrscr();
 for(i=0; i<j; i++){
 printf("please enter an integer element\n");
 scanf("%d",&arr[i]);
 }
 max=arr[0];
 min=arr[0];
 for(k=0; k<j; k++){
 if(max< arr[k]){
 max= arr[k];
 }
 if(min> arr[k]){
 min= arr[k];
 }
 }
 printf("max num= ");
 printf("%d\n", max);
 printf("min num= ");
 printf("%d\n", min);
 getch();
 }
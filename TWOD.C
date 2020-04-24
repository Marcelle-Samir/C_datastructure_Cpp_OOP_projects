#include<conio.h>
#include<stdio.h>
#define r 2
#define c 3

void main()
{
 int arr[r][c];
 int i,k;
 int sum=0;
 float sumc=0;
 float avr=0;
 clrscr();
 printf("please enter an integer element\n");
 for(k=0; k<r; k++){
	for(i=0; i<c; i++){
	 scanf("%d",&arr[k][i]);
	 }
 }
 for(k=0;k<r; k++){
	for(i=0; i<c; i++){
	  sum+= arr[k][i];
	 printf("%d\t",arr[k][i]);
	 }
	 printf("%d", sum);
	 printf("\n");
	 sum=0;
 }
 for(k=0; k<c; k++){
	for(i=0; i<r; i++){
	sumc+= arr[i][k];
	}
	avr= sumc/2;
	printf("%.2f\t", avr);
	avr=0;
	sumc=0;
	}
 getch();
 }
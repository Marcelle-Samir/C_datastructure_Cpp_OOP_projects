#include<conio.h>
#include<stdio.h>
#define r 2
#define c 3

void main()
{
 float arr[r][c];
 int i,k;
 float sum=0;
 float sumc=0;
 float avr=0;
 clrscr();
 printf("please enter an integer element\n");
 for(k=0; k<r; k++){
	for(i=0; i<c; i++){
	 scanf("%f",&arr[k][i]);
	 }
 }
 for(k=0;k<r; k++){
	for(i=0; i<c; i++){
	  sum+= arr[k][i];
	 printf("%.2f\t",arr[k][i]);
	 }
	 printf("%.2f", sum);
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
	flushall();
 getch();
 }
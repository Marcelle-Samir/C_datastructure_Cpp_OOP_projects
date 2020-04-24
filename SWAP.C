#include <stdio.h>
#include <conio.h>
void swap(int *A, int *B);
void main(){
int x= 5, y=7;
clrscr();
swap(&x, &y);
printf("x= %d, y= %d", x,y);
getch();
}
void swap(int *A, int *B){
int temp;
temp= *A;
*A = *B;
*B= temp;
}
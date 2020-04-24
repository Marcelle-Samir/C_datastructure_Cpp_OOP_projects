#include <stdio.h>
#include<conio.h>
#define N 3
void main(){
int i,col=0,row=0;
clrscr();
col=N/2;
gotoxy(col+1, row+1);
printf("1");
for(i=1; i<N*N; i++){
if(i%N){
col--;
if(col<0)
col=N-1;
row--;
if(row<0)
row=N-1;
}
else{
row++;
if(row>(N-1))
row=0;

}
gotoxy(col+1, row+1);
printf("%d", i+1);
}

getch();
}
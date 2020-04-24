#include<conio.h>
#include<stdio.h>
void main()
{
char c, press;
int col=1, row=1, cont=0, flag=1;
while(flag){
clrscr();
//col =1;
//row=1;
gotoxy(col,row);
printf("Name");
gotoxy(col,row+1);
printf("num.");
gotoxy(col,row+2);
printf("addres");
gotoxy(col,row+3);
printf("exit");
gotoxy(col,row+cont);
c=getch();
if(c== 13){
if(cont== 0){
clrscr();
printf("your Name is");
}
if(cont==1){
clrscr();
printf("your num is");
}
if(cont==2){
clrscr();
printf("your addres is");
}
if(cont==3){
flag=0;
}
}
press=getch();
switch(press)
{
case 72:
cont--;
//gotoxy(col,row);
if(cont<0)
cont=3;
break;
case 80:
//gotoxy(col,row++);
cont++;
if(cont>3)
cont=0;
//cont++;
break;
}
}
getch();
}
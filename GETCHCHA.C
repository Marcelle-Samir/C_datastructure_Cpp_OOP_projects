#include<conio.h>
#include<stdio.h>
void main()
{
char str[100];
int i=0;
char c;
clrscr();
printf("please enter one char\n");
flushall();

do{
c=getch();
str[i]= c;
i++;
}while(c!= 13);
puts(str);
getch();
}


#include<stdio.h>
#include<conio.h>
void main(){
char c;
char press;
int term=1;
clrscr();
while(term){
c=getch();
 if(c== '\0'){
 flushall();
 press=getch();
 printf("your ascii is ");
 printf("%d\n",press);
 }
 else if(c==27)
 {
 term=0;
 }
 }
 }



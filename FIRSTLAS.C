#include<stdio.h>
#include<conio.h>
void main(){
int nflag=1;
int lflag=1;
int i;
char farr[10];
char sarr[10];
clrscr();
do{
printf("please enter your first name\n");
gets(farr);
printf("please enter your last name\n");
gets(sarr);
for(i=0; i<10; i++){
if(farr[i]=='\0')
nflag=0;
}
for(i=0; i<10; i++){
if (sarr[i]=='\0')
lflag=0;
}
}while(nflag==1 || lflag==1);
puts(farr);
puts(sarr);

getch();
}
#include<conio.h>
#include<math.h>
void main()
{
char press;
int u=0, d=0;
clrscr();
gotoxy(1,1);
printf("Name");
gotoxy(1,2);
printf("num.");
gotoxy(1,3);
printf("addres");
gotoxy(1,4);
printf("exit");
getch();

while(press!=13 &&(u!=2 || d!=2)){
press=getch();
if(press== 72){
u++;
if(u>2)
u=0;
}
if (press ==80){
d++;
if(d>2)
d=0;
}
if(press == 13){
if(d==0){
clrscr();
printf("your name is x");
}
if(d==1){
clrscr();
printf("your num is 22");
}
if(d==2){
clrscr();
printf("your add is oooo");
}
}
}
getch();
}
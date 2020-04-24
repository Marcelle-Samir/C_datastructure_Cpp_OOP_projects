#include<conio.h>
#include<stdio.h>
void main()
{
 char c, press;
 char name, num, addr;
 int col=1, row=1, cont=0, flag=1;
 while(flag){
  clrscr();
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
  if(c!= '\0'){
	if(cont== 0){
	clrscr();
	printf("Please enter your name \n");
	scanf("%c", &name);
	}
  else if(cont==1){
	clrscr();
	printf("Please enter your num \n");
	scanf("%c", &num);
	}
  else if(cont==2){
	clrscr();
	printf("Please enter your addres \n");
	scanf("%c", &addr);
	}
  else if(cont==3){
	flag=0;
	}
  }
  else{
	press=getch();
	switch(press)
	{
	  case 72:
	   cont--;
	   if(cont<0)
		 cont=3;
	   break;
	  case 80:
	   cont++;
	   if(cont>3)
	   cont=0;
	   break;
	}
   }
  }
}
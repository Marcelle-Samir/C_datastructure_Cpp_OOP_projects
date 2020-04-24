#include<conio.h>
#include<stdio.h>
#define highlight 0x70
#define normal 0x07
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

	 if(cont==0){
	 gotoxy(col,row+cont);
		 textattr(highlight);
  cprintf("Name");
   textattr(normal);
  }
   if(cont==1){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("num");
   textattr(normal);
  }
	if(cont==2){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("addres");
   textattr(normal);
  }
	if(cont>2){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("exit");
   textattr(normal);
  }
  c=getch();
  if(c!= '\0'){
	if(cont== 0){
	  //	textattr(highlight);
		// cprintf("Name");
	clrscr();
	printf("Please enter your name \n");
	scanf("%c", &name);
	}
  else if(cont==1){
	//textattr(highlight);
	 //	 cprintf("num");
	clrscr();
	printf("Please enter your num \n");
	scanf("%c", &num);
	}
  else if(cont==2){
   //	textattr(highlight);
   //	cprintf("addres");
	clrscr();
	printf("Please enter your addres \n");
	scanf("%c", &addr);
	}
  else if(cont==3){
  //	textattr(highlight);
  //	cprintf("exit");
	flag=0;
	}
  }
  else{
	press=getch();
	switch(press)
	{
	  case 72:
	   cont--;
		// gotoxy(col,row+cont);
	   //	textattr(highlight);

	   if(cont<0)
		 cont=3;
		  //	 gotoxy(col,row+cont);
	   //	textattr(highlight);
	   break;
	  case 80:
	   cont++;
		// gotoxy(col,row+cont);
	   //	textattr(highlight);
	   if(cont>3)
	   cont=0;
		// gotoxy(col,row+cont);
	   //	textattr(highlight);
	   break;
	}
   }
  }

}
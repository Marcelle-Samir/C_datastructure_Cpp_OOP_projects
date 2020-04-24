#include<conio.h>
#include<stdio.h>
#define highlight 0x70
#define normal 0x07
 struct employee
  {
   int ID;
   char name[50];
   int salary;
  };

 void displayemployee(struct employee e);
 struct employee employeeinfo(void);
 void main()
  {
   char c, press;
   int col=1, row=1, cont=0, flag=1;
   int IDs;
  int true =1;
  // false=1;
   int i=0, j=0, k=0;
   struct employee e[5];
   while(flag){
   clrscr();

   gotoxy(col,row);
   printf("New employee");
   gotoxy(col,row+1);
   printf("Display");
   gotoxy(col,row+2);
   printf("ID Search");
   gotoxy(col,row+3);
   printf("Exit");
   gotoxy(col,row+cont);

   if(cont==0)
	{
	 gotoxy(col,row+cont);
	 textattr(highlight);
	 cprintf("New employee");
	 textattr(normal);
	}
   if(cont==1)
	{
	 textattr(highlight);
	 gotoxy(col,row+cont);
	 cprintf("Display");
	 textattr(normal);
	}
   if(cont==2)
	{
	 textattr(highlight);
	 gotoxy(col,row+cont);
	 cprintf("ID search");
	 textattr(normal);
	}
	  if(cont>3)
	{
	 textattr(highlight);
	 gotoxy(col,row+cont);
	 cprintf("Exit");
	 textattr(normal);
	}
   c = getch();
   if(c!= '\0')
	{
	 if(cont== 0)
	  {
	   clrscr();
	   if(i<5){
	   flushall();
	   e[i]= employeeinfo();
	   i++;
	   }
		else
		 {
		  printf("\n no more size");
		  getch();
		 }

	  }
	 else if(cont==1)
	  {
	   clrscr();
	   for(j=0;j<i; j++){
		displayemployee(e[j]);
	   }
	   getch();
	  }
	   else if(cont==2)
	  {
	  clrscr();
	  printf("enter ID num.");
	  flushall();
	  scanf("%d", &IDs);
	  for(k=0; k<5; k++)
	  {
	  if(IDs==e[k].ID)
	 {
	  displayemployee(e[k]);
	  true=0;
	  }
	  if(true==0)break;
	  }
	  if (true==1)
	  printf("\n wrong ID");
	  true=1;
	  getch();
	  }
	 else if(cont==3)
	  {
	  flag=0;
	  flushall();
	  }
  }
   else
	{
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

 struct employee employeeinfo(void)
  {
	struct employee temp;
	printf ("\n enter emp data \n ID: ");
	flushall();
	scanf("%d", &temp.ID);
	printf("\n enter Name ");
	flushall();
	gets(temp.name);
	printf("\n enter salary");
	flushall();
	scanf("%d", &temp.salary);
	return temp;
  }

	void displayemployee(struct employee e)
  {
	printf("\n inf about emp no %d", e.ID);
	printf("\n Name: %s", e.name);
	printf("\n net salary= %d", e.salary);
  }
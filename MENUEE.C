#include<conio.h>
#include<stdio.h>
#define highlight 0x70
#define normal 0x07

// struct employee
//  {
//   int ID;
 //  char name[50];
  // int salary;
 // };

// void displayemployee(struct employee e);
// struct employee employeename(void);
// struct employee employeeID(void);
// struct employee employeesalary(void);

 void main()
  {
   char c, press;
   int col=1, row=1, cont=0, flag=1;
   int i=0, j=0, k=0;
  // struct employee e[5];
  int ID[5];
   char name[5][50];
   int salary[5];
   while(flag){
   clrscr();

   gotoxy(col,row);
   printf("ID");
   gotoxy(col,row+1);
   printf("Name");
   gotoxy(col,row+2);
   printf("Salary");
   gotoxy(col,row+3);
   printf("display");
	  gotoxy(col,row+4);
   printf("exit");
   gotoxy(col,row+cont);

   if(cont==0)
	{
	 gotoxy(col,row+cont);
	 textattr(highlight);
	 cprintf("ID");
	 textattr(normal);
	}
   if(cont==1)
	{
	 textattr(highlight);
	 gotoxy(col,row+cont);
	 cprintf("Name");
	 textattr(normal);
	}
   if(cont==2)
	{
	 textattr(highlight);
	 gotoxy(col,row+cont);
	 cprintf("Salary");
	 textattr(normal);
	}
   if(cont==3)
	{
	 textattr(highlight);
	 gotoxy(col,row+cont);
	 cprintf("display");
	 textattr(normal);
	}
	   if(cont==4)
	{
	 textattr(highlight);
	 gotoxy(col,row+cont);
	 cprintf("exit");
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
		printf ("\n enter emp data \n ID: ");
	   scanf("%d", &ID[i]);
	   i++;
	   }
		else
		 {
		 clrscr();
		  printf("\n no more size");
		  getch();
		 }

	  }
	 else if(cont==1)
	  {
	   clrscr();
	   if(j<5)
	   {
		printf ("\n enter emp data \n name: ");
	   flushall();

	   gets(name[i]);
		j++;
	   }
	   else
		{
		clrscr();
		 printf("\n no more size");
		 getch();
		}

	  }
	 else if(cont==2)
	  {
	   clrscr();
		if(k<5)
		 {
			printf ("\n enter emp data \n salary: ");
		  flushall();
		  salary[k] = scanf("%d", &salary[k]);
		  k++;
		 }
		else
		 {
		  printf("\n no more size");
		  getch();
		 }

	  }

		 else if(cont==3)
	  {
	   clrscr();
		for(i=0; i<5;i++){
		printf("your ID: %d\n", ID[i]);
		printf("your name:\n");
		puts(name[i]);
		printf("your salary= %d\n", salary[i]);
		getch();
	}
	}
	 else if(cont==4)
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
			cont=4;
		break;

		case 80:
		  cont++;
		  if(cont>4)
			cont=0;
		break;
	  }
	}
  }
  getch();
 }

 // int employeeID(void)
 // {
  //	struct employee temp;
 // int temp;
 //	printf ("\n enter emp data \n ID: ");
 //	flushall();
  //	scanf("%d", &temp[i]);
	//getch();
   //		return temp;
   //	}
//  int employeesalary(void)
 // {   //	struct employee temp;
 // int temp;
  //	printf("\n enter salary");
  //	flushall();
   //	scanf("%d", &salary[j]);
	//getch();
	 //	return temp;
   //	}
 // char employeename(void)
   //	 {
   //	struct employee temp;
  // char temp[5][50];
   //	printf("\n enter Name ");
   //	flushall();
   //	gets(name);
	//getch();
  //	return temp;
 // }

  // void displayemployee(struct employee e)
 // {
   //	printf("\n inf about emp no %d", e.ID);
   //	printf("\n Name: %s", e.name);
	//printf("\n net salary= %d", e.salary-1);
   //	getch();
 // }
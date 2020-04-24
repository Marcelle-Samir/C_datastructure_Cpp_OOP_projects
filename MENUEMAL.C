#include<stdio.h>
#include<conio.h>
#define highlight 0x70
#define normal 0x07

void ID_call (void);

 void displayemployee(struct employee *ptr,int num_ID);
 struct employee
  {
   char name[50];
   char addres[50];
   int phone[15];
  };
  int emp_num;
  int emp_ID;
  void main(){
	  char c, press;
	  int col=1, row=1, cont=0, flag=1;
	  char data[5][10]={"Name","Addres", "Phone", "display", "Exit"};
	  int j;
	  int flag1=1;
	  struct employee *ptr;
	  clrscr();
	  printf("please enter employees num ");
	  scanf("%d", &emp_num);
	  ptr= (struct employee*) malloc(emp_num * sizeof(struct employee));
	  ID_call ();

	  while(flag)
	  {
		clrscr();
		for(j=0; j<5; j++){
		gotoxy(col,row+j);
		if(j==cont){
		textattr(highlight);
		}
		else
		{
		textattr(normal);
		}
		cprintf("%s", data[j]);
		textattr(normal);
		}
	   flag1=1;
	while(flag1)
	{
	  c = getch();
	  if(c!= '\0')
	  {
		switch(cont)
		{
		   case 0:

			 clrscr();
			 flushall();
			 printf("please enter emp name ");
			 gets(ptr[emp_ID].name);
			 flag1=0;
			 getch();
			 break;

		   case 1:

		   clrscr();
		   flushall();
		   printf("please enter emp Addres ");
		   gets(ptr[emp_ID].addres);
			flag1=0;
			getch();
		  break;

		  case 2:

			 clrscr();
			 printf("enter phone num.");
			 flushall();
			 scanf("%d",ptr[emp_ID].phone);
			 getch();
				flag1=0;
			 break;
		  case 3 :

			  clrscr();
			  flushall();
			  ID_call ();
			  flag1=0;
			  getch();
			  break;
		 case 4:

		clrscr();
		displayemployee(ptr, emp_ID);
		getch();
		flag1=0;
		break;
	  case 5:
		flag=0;
		flag1=0;
		flushall();
		break;
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
			cont=5;
		break;
		case 80:
		  cont++;
		  if(cont>5)
			cont=0;
		break;
	  }
	}
  }
 }
getch();
}

void ID_call (void){
printf("\n please enter employee's ID: ");
scanf("%d", &emp_ID);
}

void displayemployee(struct employee *ptr,int emp_ID)
  { int i;
	printf("\n Name: %s", ptr[emp_ID].name);
	printf("\n net salary= %s", ptr[emp_ID].addres);
	printf("\n inf about emp no " );
	for(i=0; i<15; i++)
	if(  ptr[emp_ID].phone[i]!= '\0')
	printf(" %d", ptr[emp_ID].phone[i]);
	else break;
  }

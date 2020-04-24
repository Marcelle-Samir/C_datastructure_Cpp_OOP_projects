#include<conio.h>
#include<stdio.h>

 struct employee
  {
   int ID;
   int salary;
   char name[50];
  };

 void displayemployee(struct employee e);
 struct employee reademployee(void);

 void main()
  {
	struct employee e[5];
	int i;
	clrscr();
	for(i=1; i<=5; i++){
	e[i]= reademployee();
	}
	for(i=4; i>=0; i--){
	displayemployee(e[i]);
	}
	getch();
  }

 struct employee reademployee(void)
  {
	struct employee temp;
	printf ("\n enter emp data \n ID: ");
	flushall();
	scanf("%d", &temp.ID);
	getch();
	printf("\n enter salary");
	flushall();
	scanf("%f", &temp.salary);
	getch();
	printf("\n enter Name ");
	flushall();
	gets(temp.name);
	getch();
	return temp;
  }

   void displayemployee(struct employee e)
  {
	printf("\n inf about emp no %d", e.ID);
	printf("\n Name: %s", e.name);
	printf("\n net salary= %f", e.salary-1);
	getch();
  }
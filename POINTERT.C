#include<stdio.h>
#include<conio.h>
#define n 2
void main()
  {
	char **data;
	int s,k;
	int i;
	clrscr();
	printf("please enter number of name elements ");
	scanf("%d", &s);
	data= (char**)malloc(n*sizeof(char*));
	   data[0]=(char*)malloc(s*sizeof(char));
	  printf("\n please enter name ");
	  flushall();
	 scanf("%s", data[0]);
		printf("please enter number of phone elements ");
	scanf("%d", &k);
	 data[1]=(char*)malloc(k*sizeof(char));
	  printf("\n please enter phone ");
	  flushall();
	 scanf("%s", data[1]);
	 getch();
	  for(i=0; i<s; i++)
	 printf("%c", data[0][i]);
	 getch();
	 printf("\n");
	 for(i=0; i<k; i++)
	 printf("%c", data[1][i]);
	 getch();
}
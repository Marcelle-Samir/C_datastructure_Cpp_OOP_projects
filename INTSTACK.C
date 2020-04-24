#include<conio.h>
#include<stdio.h>
#define highlight 0x70
#define normal 0x07
#define Null '\0'

typedef struct stack
  {
  int top, size;
  int *stk;
  }stack;
int init_stack(stack *s, int size)
  {
	 int *i=(int*)malloc(size*sizeof(int));
	 if(i !=NULL)
	{
	s->size=size;
	s->top=0;
	return 1;
	}
  return 0;
  }
int is_empty_stack(stack *s)
  {
  if(s->top==0)
	 return 1;
  return 0;
  }
int is_full_stack(stack *s)
  {
  return(s->top == s->size);
  }
int push(stack *s, int *data)
  {
  int i;
  if(! is_full_stack(s))
	{
	s-> stk[s->top]=*data;
	s->top++;
	for(i=0; i< s->top; i++)
		printf("%d \n", s->stk[i] );
	getch();
	return 1;
	}
  printf("stack full \n");
  getch();
  return 0;
  }
int pop(stack *s, int *data)
  { int i;
  if(! is_empty_stack(s))
	{
	s->top--;
	*data= s-> stk[s-> top];

	for(i=0; i< s->top ; i++)
	printf("%d \n", s->stk[i] );
	getch();
		return 1;
	}
	 printf("stack empty \n");
  return 0;

  }
void main()
  {
   int key, Dkey;
   char c, press;
   char name, num, addr;
   int col=1, row=1, cont=0, flag=1;
   stack *arrstack;
   int size;
   int *Anum;
   int emp;
   Anum= &emp;
   clrscr();
   printf("enter your stack size  ");
   flushall();
   scanf("%d", &size);
   getch();
   init_stack(arrstack, size);
   while(flag)
   {
	clrscr();
	gotoxy(col,row);
	printf("Push");
	gotoxy(col,row+1);
	printf("pop");
	gotoxy(col,row+2);
	printf("exit");
	gotoxy(col,row+cont);

	 if(cont==0){
	 gotoxy(col,row+cont);
		 textattr(highlight);
  cprintf("Push");
   textattr(normal);
  }

	if(cont==1){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("pop");
   textattr(normal);
  }
	if(cont>1){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("exit");
   textattr(normal);
  }
  flushall();
  c=getch();
  if(c!= '\0'){
	if(cont== 0){
	clrscr();
	printf("enter num  ");
	scanf("%d", Anum);
	push(arrstack, Anum);
	}

  else if(cont==1){
	clrscr();

	pop(arrstack, Anum);
	getch();

	}

  else if (cont==2){
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
		 cont=2;
	   break;

	  case 80:
	   cont++;
	   if(cont>2)
	   cont=0;
	   break;
	}
   }
  }
  }

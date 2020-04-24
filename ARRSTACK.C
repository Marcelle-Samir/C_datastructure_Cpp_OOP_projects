#include<conio.h>
#include<stdio.h>
#define highlight 0x70
#define normal 0x07
	 #define Null '\0'
typedef struct Node
  {
   int ID;
   char name[50];
  }Node;

typedef struct stack
  {
  int tos, size;
  int *Node;
  }stack;
int init_stack(stack *s, int size)
  {
	 Node *i=(Node*)malloc(size*sizeof(Node));
	 if(i !=NULL)
	{
	s->size=size;
	s->tos=0;
	return 1;
	}
  return 0;
  }
int is_empty_stack(stack *s)
  {
  if(s->tos==0)
	 return 1;
  return 0;
  }
int is_full_stack(stack *s)
  {
  return(s->tos == s->size);
  }
int push(stack *s, Node *data)
  {
  if(! is_full_stack(s))
	{
	s-> Node[s->tos]->ID=data->ID;
	s-> Node[s->tos].name=data->name;
	s->tos++;
	return 1;
	}
  return 0;
  }
int pop(stack *s, int *data)
  {
  if(! is_empty_stack(s))
	{
	s->tos--;
	*data= s-> Node[s-> tos];
	return 1;
	}
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
   Node *emp;
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
	printf("Add");
	gotoxy(col,row+1);
	printf("delete");
	gotoxy(col,row+2);
	printf("search");
	gotoxy(col,row+3);
	printf("display");
	gotoxy(col,row+4);
	printf("exit");
	gotoxy(col,row+cont);

	 if(cont==0){
	 gotoxy(col,row+cont);
		 textattr(highlight);
  cprintf("Add");
   textattr(normal);
  }

	if(cont==1){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("delete");
   textattr(normal);
  }
	if(cont==2){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("search");
   textattr(normal);
  }
	if(cont==3){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("display");
   textattr(normal);
  }
	if(cont>3){
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
	printf("enter ID  ");
	scanf("%d", &emp->ID);
		printf("enter Name  ");
	   gets(emp->name);
	push(arrstack, emp);

	}

  else if(cont==1){
	clrscr();
	printf("enter your key ");
	scanf("%d", &Dkey);

	}
  else if(cont==2){
	clrscr();
	printf("enter your key");
	scanf("%d", &key)   ;
 //	re= search(list, key) ;

	printf ("\n your ID is ");
   //	printf("%d \n", re->ID);
	printf ("your salary is ");
  //	printf("%d \n", re->salary);
	printf ("your name is ");
 //	puts(re->name);
	getch();
	}
	 else if (cont==3){
	 clrscr();
 //	 display_list(list);
  }
  else if (cont==4){
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
  }

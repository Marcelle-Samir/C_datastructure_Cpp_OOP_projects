#include<conio.h>
#include<stdio.h>
#define highlight 0x70
#define normal 0x07
#define Null '\0'

typedef struct queue
  {
  int IN, size;
  int *que;
  }queue;
int init_queue(queue *q, int size)
  {
	 int *i=(int*)malloc(size*sizeof(int));
	 if(i ==NULL)
		return 0;
	q->size=size;
	q->IN=0;
	return 1;
  }
int is_empty_queue(queue *q)
  {
  return !(q->IN);
  }
int is_full_queue(queue *q)
  {
  return(q->IN == q->size);
  }
int IN_queue(queue *q, int *data)
  {
  int i;
  if(! is_full_queue(q))
	{
	q-> que[q->IN]=*data;
	q->IN++;
	for(i=0; i< q->IN; i++)
		printf("%d \n", q->que[i] );
	getch();
	return 1;
	}
  printf("queue full \n");
  getch();
  return 0;
  }
int out_queue(queue *q, int *data)
  { int i;
  if(is_empty_queue(q))
	{	 printf("queue empty \n");
  return 0;
  }

	*data= q-> que[0];
	for(i=0; i<q->IN-1 ; i++)
	  q-> que[i]= q->que[i+1];
		q->IN--;
	for(i=0; i< q->IN ; i++)
	printf("%d \n", q->que[i] );
	getch();
		return 1;
	}
void main()
  {
   int key, Dkey;
   char c, press;
   char name, num, addr;
   int col=1, row=1, cont=0, flag=1;
   queue *arrqueue;
   int size;
   int *Anum;
   int emp;
   Anum= &emp;
   clrscr();
   printf("enter your stack size  ");
   flushall();
   scanf("%d", &size);
   getch();
   init_queue(arrqueue, size);
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
	IN_queue(arrqueue, Anum);
	}

  else if(cont==1){
	clrscr();

	out_queue(arrqueue, Anum);
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

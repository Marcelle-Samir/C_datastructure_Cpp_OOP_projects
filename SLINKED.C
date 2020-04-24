#include<conio.h>
#include<stdio.h>
#define highlight 0x70
#define normal 0x07
#define Null '\0'
#define M 6
void swap(int *A, int *B);
void bubble_sort(int *arr, int N);

typedef struct Node
  {
   int ID;
   int salary;
   char name[50];
   struct Node * prev;
   struct Node * next;
  }Node;

typedef struct linkedlist
  {
   Node *start;
   Node *end;
  }linkedlist;

Node * creat_node(void)
  {
   Node * element= (Node*) malloc(sizeof(Node));

   printf("\n enter an ID  ");
	flushall();
   scanf("%d",&element->ID);
	 printf("\n enter salary  ");
	  flushall();
   scanf("%d",&element->salary);
	 printf("\n enter name  ");
	  flushall();
   gets(element->name);
   return element;
  }


 void Add (linkedlist *L, Node* newele)
  {
   if(L -> start == Null)
	{
	 L -> start= newele;
	 L -> end= newele;
	 newele -> prev= Null;
	 newele -> next= Null;

	}
   else
	{
	 L-> end -> next= newele;
	 newele -> prev = L-> end;
	 L-> end = newele;
	 newele -> next= Null;
	}
  }
void display_list(linkedlist *L)
{
Node *temp= L->start;
while(temp)
{
//L->start= temp-> next;
 printf ("\n your ID is ");
 printf("%d \n", temp->ID);
  printf ("your salary is ");
 printf("%d \n", temp->salary);
  printf ("your name is ");
 puts(temp->name);
 getch();
 temp=temp->next;
}
}
Node *search(linkedlist *L, int key)
{
Node *temp= L->start;
if(L-> start ==Null)
return Null;
while(temp!=Null && temp->ID != key)
  temp= temp->next;

return temp;
}

int delete_node(linkedlist *L, int key){
Node *temp;
temp= search(L,key);
if(!temp)
return 0;
if(L->start==temp&&L->start==L->end)
{
L->start =L->end=Null;
 }
else if(L-> start== temp)
{
L->start= L->start-> next;
L->start->prev=Null;
}
else if(L->end==temp)
{
L->end = L->end-> prev;
L-> end->next=Null;
}
else{
temp->prev-> next= temp->next;
temp->next->prev= temp->prev;
}
free(temp);
return 1;
}


void insert(linkedlist * L, Node *newele)
{
//creat_node();
Node *temp= L->start;
if(L->start==Null)
  Add(L, newele);
while(temp && ((temp-> ID)< (newele-> ID)))
 temp = temp-> next;
if (!temp)
 Add(L, newele);
else if (temp== (L->start))
{
newele-> next = L-> start;
L->start -> prev= newele;
L-> start = newele;
newele -> prev= Null;
}
else
{
temp-> prev -> next= newele;
newele-> prev= temp-> prev;
newele -> next= temp;
temp -> prev= newele;
}
}


void main()
{
 int arr[M];
   int i;
 linkedlist *list;
	  int key, Dkey;
 Node *nelement;
 Node *re;
 Node *ielement;
 char c, press;
 char name, num, addr;
 int col=1, row=1, cont=0, flag=1;
  list->start= list-> end= Null;
 while(flag){
  clrscr();

  gotoxy(col,row);
  printf("Add");
  gotoxy(col,row+1);
  printf("insert");
  gotoxy(col,row+2);
  printf("delete");
  gotoxy(col,row+3);
  printf("search");
	gotoxy(col,row+4);
  printf("display");
	gotoxy(col,row+5);
   printf("sort");
	gotoxy(col,row+6);
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
  cprintf("insert");
   textattr(normal);
  }
	if(cont==2){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("delete");
   textattr(normal);
  }
	if(cont==3){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("search");
   textattr(normal);
  }
	if(cont==4){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("display");
   textattr(normal);
  }
	if(cont==5){
	  textattr(highlight);
  gotoxy(col,row+cont);
  cprintf("sort");
   textattr(normal);
  }
	if(cont>5){
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
	nelement= creat_node();
	Add (list, nelement);

	}
  else if(cont==1){
	clrscr();
	ielement= creat_node();
	insert(list, ielement);
	}
  else if(cont==2){
	clrscr();
	printf("enter your key ");
	scanf("%d", &Dkey);
	delete_node(list, Dkey);
	}
  else if(cont==3){
	clrscr();
	printf("enter your key");
	scanf("%d", &key)   ;
  re= search(list, key) ;

	 printf ("\n your ID is ");
 printf("%d \n", re->ID);
  printf ("your salary is ");
 printf("%d \n", re->salary);
  printf ("your name is ");
 puts(re->name);
 getch();
	}
	 else if (cont==4){
	 clrscr();
	 display_list(list);
  }
	 else if (cont==5){
	 clrscr();
	 printf("your sorted data is\n");
	 bubble_sort(list);
  }
  else if (cont==6){
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
		 cont=6;
	   break;

	  case 80:
	   cont++;
	   if(cont>6)
	   cont=0;
	   break;
	}
   }
  }
}

void bubble_sort(linkedlist *list)
  {
  int i, j, sorted=0;
  for(i=0; i<(N-1)&&(!sorted); i++)
	{
	  sorted=1;
	  for(j=(N-1); j>i; j--)
		{
		if(arr[j]<arr[j-1])
		  {
		  swap(&arr[j], &arr[j-1]);
		  sorted=0;
		  }
		}
	}
  }
void swap(int *A, int *B){
int temp;
temp= *A;
*A = *B;
*B= temp;
}
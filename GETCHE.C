#include<stdio.h>
#include<conio.h>
void main(){
  char arr[50];
  char c;
  int i=0;
  // cont=0;
  int k;
  char press;
  int term=1;
  int col=1, row=1;
  k=i;
  clrscr();
  gotoxy(col, row);

  while(term)
	{
	   flushall();
	   c=getch();
	   if(c=='\0')
		{
		 flushall();
		 press=getch();
		 switch(press)
		  {
			case 77:
			  if(col<=k){
			   gotoxy(++col, row);
			   ++i;
			   }
			   break;
			case 75:
			   gotoxy(--col, row);
			   --i;
			   break;
			case 71:
			col=1;
			   gotoxy(col,row);
			   i=0;
			   break;
			case 79:
			col= k;
			   gotoxy(col, row);
			   break;
		  }
		}
	   else	if(c!= '\0')
		{
		 switch (c)
		  {
			case 13:
			   term=0;
			   arr[k] ='\0';
			   break;
			default:
			 //  ++cont;
			   arr[i]=c;
			   printf("%c", arr[i]);
			   gotoxy(++col, row);
			   ++i;
			   if(k<i)
			   k=i;
		  }
		}
   }
   printf("\n");
   puts(arr);
   getch();
}

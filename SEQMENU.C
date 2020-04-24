#include<stdio.h>
#include<conio.h>
void seq_search_ID( struct employee *arr, int size, int key);
void seq_search_name( struct employee *arr, int size, char key[10]);
int i;
struct employee{
int ID;
char name[10];
};
struct employee e[5]={{1, "a"},{2, "b"}, {3, "c"},{ 4,"d"},{5,"e"}};
void main(){
int IDnum;
char sname[10];
clrscr();
printf("\n please enter ID  ");
flushall();
scanf("%d", &IDnum);
seq_search_ID( e, 5, IDnum);
printf("\n please enter name  ");
flushall();
gets(sname);
seq_search_name( e, 10, sname);
getch();
}
void seq_search_ID( struct employee *arr, int size, int key){
	 for(i=0; i<size; i++)
		if(arr[i].ID==key)
		  puts(arr[i].name);
		  getch();
}
void seq_search_name( struct employee *arr, int size, char key[10]){
	 int x;
	 for(i=0; i<size; i++) {
	   x=strcmp(arr[i].name,key);
	   if(x==0)
		  printf("\n %d", arr[i].ID);
		   }
		  getch();
}
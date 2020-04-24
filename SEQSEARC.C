#include<stdio.h>
#include<conio.h>
#define ssize 15
void seq_search( int *arr, int size, int key);
int i;
int skey;
void main(){
int sarr[ssize];
clrscr();
printf("please enter your elements");
for(i=0;i<ssize; i++){
scanf("%d", &sarr[i]);
}
printf("\n enter num to search for ");
scanf("%d", &skey);
seq_search(sarr, ssize, skey);
printf("your index num is ");
getch();
}
void seq_search( int *arr, int size, int key){
	 for(i=0; i<size; i++)
		if(arr[i]==key)
		  printf("%d \n",i);

}
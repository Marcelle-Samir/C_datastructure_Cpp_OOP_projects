#include<stdio.h>
#include<conio.h>
#define bsize 15
int mid;
int bin_search( int *arr, int size, int key);
int i;
int bkey;
void main(){
int barr[bsize];
clrscr();
printf("please enter your elements");
for(i=0;i<bsize; i++){
scanf("%d", &barr[i]);
}
printf("\n enter num to search for ");
scanf("%d", &bkey);
mid =bin_search(barr, bsize, bkey);
if(mid!=-1){
printf("your index num is ");
printf("%d",mid);
}
else
 printf("\n not found");
getch();
}
int bin_search( int *arr, int size, int data){
int high, low;
low=0;
high= size-1;
while(high>=low)
  {
  mid= (low+high)/2;
  if(arr[mid]==data)
	return mid;
  else if(arr[mid]> data)
	high = mid-1;
  else
  low = mid+1;
  }
return -1;
}
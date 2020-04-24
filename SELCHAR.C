#include<stdio.h>
#include<conio.h>
#define M 5
void main()
  {
	int i, j, index,x;
	int N=M ;
	char *temp;
	char arr[M][10];
	clrscr();
	printf("please enter your elements\n");
	for(i=0; i<M; i++){
	  flushall();
	  gets(arr[i]);
	   }

	for(i=0; i<(N-1); i++)
	   {
		index= i;
		for(j=(i+1); j<N; j++)
		  {
			x= strcmp(arr[j],arr[index]);
			if(x<0){
			index=j;}
		  }
		//  printf("j: %d",j);
	   strcpy(*temp, arr[i]);
	   strcpy(arr[i], arr[index]);
	   strcpy(arr[index], *temp);
	}
	printf("sorting is \n");
	for(i=0; i<M; i++){
	puts(arr[i]);}
	getch();
   }
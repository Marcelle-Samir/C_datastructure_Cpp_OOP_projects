#include<conio.h>
#include<math.h>
void main()
{
int x=0, sum=0;
clrscr();
while(sum<100){
printf("please enter int num \n");
scanf("%d", &x);
sum+=x;
}
printf("your sum= ");
printf("%d", sum);
getch();
}
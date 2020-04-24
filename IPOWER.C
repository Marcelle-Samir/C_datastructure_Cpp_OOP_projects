#include<conio.h>
#include<stdio.h>
void main(){
int power;
int num;
int result;
clrscr();
printf("enter a number ");
scanf("%d", &num);
printf("enter a power number ");
scanf("%d", &power);
result= powercal(num, power);
printf("your result= ");
printf("%d", result);
getch();
}
int  powercal(int num,int power){
   int result =1;
   while(power !=0)
   {
   result*=num;
   --power;
   }
   return result;
}

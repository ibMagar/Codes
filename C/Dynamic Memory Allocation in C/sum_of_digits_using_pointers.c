#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int sum_of_digits(int*ptr)
{

   int r,sum=0;
   while(*ptr>0||sum>9)
   {
       if(*ptr==0)
       {
           *ptr=sum;
           sum=0;
       }
       r=*ptr%10;
       sum+=r;
       *ptr=*ptr/10;
   }
   return sum;
    
}
int main()
{
system("cls");

int n,sum=1;
scanf("%d",&n);
printf("\n%d",sum_of_digits(&n));



return 0;
}
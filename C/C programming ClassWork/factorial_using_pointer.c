#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int factorial(int*n,int*sum)
{
    // if(*n<=1)
    // return 1;
    // else
    // {
    //     return (*n)*(factorial((*n)-1));
    // }
    
    for(int i=1;i<=(*n);i++)
    {
        *sum=*sum * i;
    }
    return *sum;
    
}
int main()
{
system("cls");

int a;
scanf("%d",&a);
int sum=1;
printf("\n%d",factorial(&a,&sum));

return 0;
}
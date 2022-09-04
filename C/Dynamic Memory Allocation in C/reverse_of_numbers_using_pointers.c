#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int reverse(int*n,int*sum)
{
    while(*n>0)
    {
     *sum=(*sum * 10 )+ (*n%10);
     *n=(*n)%10;
    }
    return *sum;
}
void rev(int*n)
{
    while(*n>0)
    {
        int a=*n%10;
        printf("%d",a);
        *n=*n/10;
    }
}
int main()
{
system("cls");

int a,b=0;
scanf("%d",&a);
//printf("\n%d",reverse(&a,&b));
printf("\n");
rev(&a);
return 0;
}
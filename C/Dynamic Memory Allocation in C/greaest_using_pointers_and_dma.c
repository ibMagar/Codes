#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int* greatest(int*a,int*b,int*c) 
{
    if(*a>*b&&*a>*c)
    return a;
    else if(*b>*a&&*b>*c)
    return b;
    else
    return c;
    
}
int main()
{
system("cls");

int a,b,c;
int *ptr_a,*ptr_b,*ptr_c;
scanf("%d%d%d",&a,&b,&c);
ptr_a=&a;
ptr_b=&b;
ptr_c=&c;
int*d=greatest(ptr_a,ptr_b,ptr_c);
printf("\n%d",*d);

return 0;
}
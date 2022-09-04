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

int*ptr;
ptr=(int*)malloc(sizeof(int)*3);
for(int i=0;i<3;i++)
{
    scanf("%d",(ptr+i));
}
int*d=greatest((ptr),(ptr+1),(ptr+2));
printf("\n%d",*d);

return 0;
}
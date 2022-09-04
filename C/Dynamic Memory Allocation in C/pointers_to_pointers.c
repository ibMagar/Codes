#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

int*p;
int**ptr;
int a=10;
p=&a;
ptr=&p;
printf("%d",**ptr);



return 0;
}
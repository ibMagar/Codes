#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

void*ptr;
int a = 21;
ptr=&a;
printf("%d",*(int*)ptr);
printf("\n%d %d",sizeof(ptr), sizeof(a));
int* b;
printf("\n%d",sizeof(b));

return 0;
}
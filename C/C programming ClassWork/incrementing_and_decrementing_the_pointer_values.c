#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

int x[10];
int i=0;
for( i=0;i<10;i++)
{
    x[i]=i+1;
}
int*p=x;

for(i=0;i<10;i++)
{
    printf("\n%d",x[i]);
}

for( i=0;i<10;i++)
{
   (*(p+i))++;

}
printf("\n");

for(i=0;i<10;i++)
{
    printf("\n%d",x[i]);
}



return 0;
}
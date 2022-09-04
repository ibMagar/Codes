#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void close()
{
    printf("\nclose function exectuion");
}
void message()
{
    printf("\nmessage function");
}

int main()
{
system("cls");

atexit(message);
atexit(close);
for(int i=0;i<10;i++)
{
    printf("\n%d",i);
}
return 0;
}
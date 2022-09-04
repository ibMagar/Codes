#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void fun()
{
    printf("\nThis function is called using atexit function");
}
void funa(int a)
{
    printf("\nThis function is also called using atexit function passing value %d",a);
}
int main(int argc, char* argv[])
{
system("cls");
atexit(fun);
//atexit(funa(20));
printf("\nStarting program: ");


return 0;
}
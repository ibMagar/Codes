#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
system("cls");

char name[30];
fgets(name, sizeof(name),stdin);
fputs(name,stdout);

return 0;
}   
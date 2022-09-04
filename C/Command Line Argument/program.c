#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(int argc, char *argv[])
{
system("cls");

printf("%d ",argc);

for(int i=0;i<argc;i++)
{
    printf("\n%d: %s",i,argv[i]);
}
printf("\n\nCommandLine Success!");

return 0;
}
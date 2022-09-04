#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void print_rev_string(char info[], int counter)
{
    if(counter>=0)
    {
        printf("\n%c",info[counter]);
        print_rev_string(info,--counter);
    }
    else
    {
        return;
    }
    
    
}
int main()
{
system("cls");

char info[20];
int counter=sizeof(info)-1;
fgets(info,sizeof(info),stdin);
print_rev_string(info,sizeof(info)-1);
return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

int*array=(int*)malloc(sizeof(int)*10);
for(int i=0;i<10;i++)
{
    scanf("%d",(array+i));
}

int p;
printf("\nenter number to find: ");
scanf("%d",&p);
int count=0;
for(int i=0;i<10;i++)
{
    if(*(array+i)==p)
    {
        printf("\nfound");
        break;
    }
    else
    {
        /* code */count++;
    }
    
   
}
if(count>=10)
{
    printf("not found");
}


return 0;
}


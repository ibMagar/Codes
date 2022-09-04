#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int* multiple_by_seven(int*array)
{
    for(int i=0;i<5;i++)
    {
        *(array+i)*=7;
    }
    return array;
}
int main()
{
system("cls");
int*array=(int*)malloc(sizeof(int)*5);
for(int i=0;i<5;i++)
{
    scanf("%d",(array+i));
}

array = multiple_by_seven(array);
for(int i=0;i<5;i++)
{
    printf("\n %d",*(array+i));
}

return 0;
}
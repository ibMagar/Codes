#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void _atoi()
{
    char str[]="I love you";
    int num;
    num=atoi(str);
    printf("The number value of \"%s\" is:  %d",str,num);
}


int main()
{
    system("cls");

    printf("converting string into numbers: \n\n");
    
    // 
    _atoi();


    return 0;
}
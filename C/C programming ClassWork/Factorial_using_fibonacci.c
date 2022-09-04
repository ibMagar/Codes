#include<stdio.h>
#include<stdlib.h>


int factorial(int n)
{
    if(n==1)
    {
        return 1; //
    }
    else
    {
        return n*factorial(n-1);
    }
    
}



int main()
{

    system("cls");

    printf("\t\t Factorial using Recursive function");
    int value , factorial_num ;
    printf("\n Enter the number for the factorial : ");
    scanf("%d",&value);
   // if(value<55)
    //{
        factorial_num=factorial(value);
    //}

    printf("%d!: %d",value,factorial_num);

    return 0;
}
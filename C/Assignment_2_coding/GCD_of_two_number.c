#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int GCD(int a , int b)
{
   
    if(b==0) return a;
    else 
        return GCD(b,a%b);
   
}

int main()
{

    system("cls");

    int n1,n2,gcd=1;
    printf("\nEnter the first number: ");
    scanf("%d",&n1);
    printf("\nEnter the second number: ");
    scanf("%d",&n2);
    
        printf("\n the gcd of two numbers is : %d", GCD(n1,n2));


    return 0;
}
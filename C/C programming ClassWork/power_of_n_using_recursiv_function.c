#include<stdio.h>
#include<stdlib.h>


int power_of_n(int counter,int n, int power) 
{
    if(counter==power) 
    return n;
    else
    {
        return n*(power_of_n(++counter,n,power));
    }
    
}


int main()
{
    system("cls");
    printf("power of number");
    int n,power;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    printf("\nEnter the power to be calculated: ");
    scanf("%d",&power);
    int sum=power_of_n(1,n,power);
    printf("\n %d^%d : %d",n,power,sum);


    return 0;
}
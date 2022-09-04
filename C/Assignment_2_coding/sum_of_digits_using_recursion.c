#include<stdio.h>
#include<stdlib.h>


int sum_of_digits(int n, int sum)
{
    if(n>0)
    {
    int x = n%10;
    sum+=x;
    n=n/10;
    sum_of_digits(n,sum);
    }
    else
    return sum;
}


int main()
{
    system("cls");

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum;
    printf("\nsum of the digits of %d is %d",n,sum_of_digits(n,sum));
    return 0;
}
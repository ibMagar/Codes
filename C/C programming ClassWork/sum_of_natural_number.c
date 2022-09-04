#include<stdio.h>
#include<stdlib.h>


int sum_of_natural_nbr(int n,int limit)
{
    if(n==limit)
    {
        return 1;
    }
    else
    {
        return n + sum_of_natural_nbr(++n,limit);
    }
    
}



int main()
{
    system("cls");

    printf("Enter the limit of the natural number :");
    int limit,sum=0;
    scanf("%d",&limit);
    sum=sum_of_natural_nbr(1,limit);
    printf("\n Sum of the natural number upto %d is : %d",limit, sum);

    return 0;
}
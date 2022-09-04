#include<stdio.h>
#include<stdlib.h>

int sum(int x,int array[],int size)
{
    if(x>(size-1))
    {
        return 0;
    }
    else
    {
        
        return array[x] + sum(++x,array,size);
    }
    
}

int main()
{

    printf("Sum of the elements of the array using the recursive functin: ");

    int size;
    printf("\n Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }


    int Sum = sum(0,array,size);
    printf("\n sum: %d",Sum);




    return 0;
}
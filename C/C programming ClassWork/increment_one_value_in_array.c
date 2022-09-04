#include<stdio.h>
#include<stdlib.h>

int* return_increment(int size, int ar[])
{
    int i;
    for(i=0;i<size;i++) 
    {
        ar[i]++;
    }
    return ar;
}

int main()
{
    system("cls");

    printf("\t\t Classwork 1");
    int size,i,j;
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    int *p;
    printf("\n Enter the %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    p=return_increment(size,array);

    printf("\nincremented: \n");
    for(i=0;i<size;i++)
    {
        printf("\t %d",p[i]);
    }

    return 0;
}
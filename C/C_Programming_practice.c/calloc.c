#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    printf("Calloc");

    int size; 
    printf("\n Enter the size of the memory: ");
    scanf("%d",&size);
    //pointing to the contigous memory of size bytes
    int* a = calloc(size,sizeof(size));
    printf("\nEnter %d values: ",size);
    int i;
    for(i=0;i<size;i++) 
    {
        scanf("%d",(a+i));
    }

    printf("\n");
    for(i=0;i<size;i++) 
    {
        printf("\t %d",*(a+i));
    }

    free(a);// freed the memory of the contiguous memory 

     printf("\n");
    for(i=0;i<size;i++) 
    {
        printf("\t %d",*(a+i));
    }

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    //Input part
    int* allocation_1=(int*)malloc(10*sizeof(int));
    for(int i=0; i<10; i++)
    {
        *(allocation_1+i)=i+1;
    }
    int* allocation_2=(int*)realloc(allocation_1, 20*sizeof(int));
    for(int i=10; i<20; i++)
    {
        *(allocation_2+i)=i+1;
    }



    //printing part
    printf("\n Allocation_1: ");
    for(int i=0; i<10; i++)
    {
        printf("\t%d", *(allocation_1+i));
    }
    
    printf("\n Allocation_2: ");
    for(int i=0; i<20; i++)
    {
        printf("\t%d", *(allocation_2+i));
    }


    //free
    free(allocation_1);
    


    //printing part

    printf("\n Allocation_1: ");
    for(int i=0; i<10; i++)
    {
        printf("\t%d", *(allocation_1+i));
    }
    
    printf("\n Allocation_2: ");
    for(int i=0; i<20; i++)
    {
        printf("\t%d", *(allocation_2+i));
    }
    

    return 0;
}
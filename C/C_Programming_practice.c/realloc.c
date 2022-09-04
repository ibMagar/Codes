#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    printf("\t\t Realloc");

    int *n = malloc(10*sizeof(*n)); //declaring the contiguos memory of integer using the integer pointer
    int i,j;
    for(i=0;i<10;i++)               //inserting the value to the contiguos memory 
    {
    *(n+i)=i+1;
    }

    printf("\n");

    for(i=0;i<10;i++)               //printing the values of the contiguos memeory
    {
        printf("\t%d",*(n+i));
    }

    //Now changing (increasing) the size of the memeory using the realloc function

    int *m = realloc(n,20*sizeof(*n));

    for(i=10;i<20;i++)               //inserting the value to the contiguos memory 
    {
    *(m+i)=i+1;
    }

    printf("\n");

    for(i=0;i<20;i++)               //printing the values of the contiguos memeory
    {
        printf(" %d",*(m+i));
    }

 
    free((m));

    // m=realloc(m,5*sizeof(int));
    // printf("\n\n\n");
    // for(i=0;i<5;i++)              //printing the values of the contiguos memeory
    // {
    //     printf(" %d",*(m+i));
    // }

    //  Now decreasing the size of the contiguos memeory

    // int* o=realloc(m,5*sizeof(*n));
    // free((o+2));
    // printf("\n\n");

    for(i=0;i<20;i++)              //printing the values of the contiguos memeory
    {
        printf("\t%d",*(m+i));
    }


    return 0;
}




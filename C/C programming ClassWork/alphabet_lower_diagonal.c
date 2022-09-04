#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int i,j,k;
    for(i=0,k=64;i<27;i++,k++)
    {
        for(j=0;j<i;j++) 
        {
            printf("%c ",k);
        }
        printf("\n");
    }

    return 0;
}
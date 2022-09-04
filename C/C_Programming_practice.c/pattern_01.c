#include<stdio.h>
#include<stdlib.h>

int main()
{
     system("cls");
     int i,j,row,column;
     printf("\t\t Lower Diagram Pattern");
     printf("\n Enter the row of the pattern: ");
     scanf("%d",&row);
     
     printf("\n");

     for(i=0;i<row;i++)
     {
         for(j=0;j<i+1;j++)
         {
          printf("* ");
         }
         printf("\n");
     }


    return 0;
}
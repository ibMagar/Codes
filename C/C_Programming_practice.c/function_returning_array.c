#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int** add(int Ar[][2], int ar[][2])
{
       static int sum[2][2];
       for(int i=0;i<2;i++) 
       {
           for(int j=0;j<2;j++)
           {
               sum[i][j]=Ar[i][j]+ar[i][j];
           }
       }
       return &sum;
       
       
}

int main()
{
system("cls");

int array_1[2][2]={1,2,3,4};
int array_2[2][2]={3,4,5,6};

int** Sum;
*Sum = add(array_1,array_2);


for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("\t%d",Sum[i][j]);
    }
    printf("\n");
}

return 0;
}
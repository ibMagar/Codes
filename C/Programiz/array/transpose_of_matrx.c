#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
system("cls");

int row =2,col=3;
int matrix[row][col];
int transpose[col][row];
for(int i=0;i<row;i++)
{
    printf("\nfor row %d\n",i);
    for(int j=0;j<col;j++)
    {
        scanf("%d",&matrix[i][j]);
        transpose[j][i]=matrix[i][j];
    }
}

printf("\n\n");
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("\t%d",matrix[i][j]);
    }
    printf("\n");
}

printf("\n\n");
for(int i=0;i<col;i++)
{
    for(int j=0;j<row;j++)
    {
        printf("\t%d",transpose[i][j]);
    }
    printf("\n");
}


return 0;
}
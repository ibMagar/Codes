#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void diagonal(int a, int matrix[][a])
{
    printf("\n Diagonal \n");
    for(int i=0;i<a;i++)
    {
        printf("\t%d",matrix[i][i]);
    }
}

void upr(int a, int matrix[][a])
{
    printf("\n Upr: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
}
void lwr(int a, int matrix[][a])
{
    printf("\n Lwr: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(j<(a-i-1))
            printf("\t");
            else
            printf("\t%d",matrix[i][j]);
            
        }
        printf("\n");
    }
}

int main()
{
    
    int j;
    int t=3;
system("cls");

int matrix[3][3];
 for(int i=0;i<3;i++)
 {
     for(j=0;j<t;j++)
     scanf("%d%d%d",&matrix[i][0],&matrix[i][1],&matrix[i][2]);
 }
 diagonal(3,matrix);
 printf("\n");
 upr(3,matrix);
 lwr(3,matrix);

return 0;
}
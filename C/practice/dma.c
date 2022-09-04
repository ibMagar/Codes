#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define row 2
#define col 2
void readMat(int*mat[])
{
    for(int i=0;i<row;i++)
    {
        mat[i]=(int*)malloc(sizeof(int)*col);
        for(int j=0;j<col;j++)
        {
            scanf("%d",*(mat+i)+j);
        }
    }
}

void printMat(int*mat[])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[])
{
system("cls");

int *mat1[row];
readMat(mat1);
printMat(mat1);

return 0;
}
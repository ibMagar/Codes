#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void read(int*ptr[],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        ptr[i]=(int*)malloc(sizeof(int)*col);
        for(int j=0;j<col;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
}
void print(int*ptr[],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("\t%d",ptr[i][j]);
        }
    }
    printf("\n");
}
int main()
{
system("cls");

int row,col;
printf("enter row: ");
scanf("%d",&row);
printf("\nenter the col: ");
scanf("%d",&col);

int *mat1[row],*mat2[row];
printf("\nmatrix 1: \n");
read(mat1,row,col);
printf("\nmatrix 2: \n");
read(mat2,row,col);
print(mat1,row,col);
print(mat2,row,col);


return 0;
}
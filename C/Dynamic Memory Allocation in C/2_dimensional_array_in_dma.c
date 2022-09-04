#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define row 3
#define col 3

void read(int mat[][col])
{
    for(int i=0;i<row;i++) 
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",(*(mat+i)+j));
        }
    }
}
void print_matrix(int mat[][col])
{
    for(int i=0;i<row;i++) 
    {
        for(int j=0;j<col;j++)
        {
            printf("\t%d",*(*(mat+i)+j));
        }
        printf("\n");
    }
}

void print_array(int mat[][col])
{
   int* ptr=&mat[0][0];
     for(int i=0;i<row;i++) 
    {
        for(int j=0;j<col;j++)
        {
           // printf("\t%d",*(ptr+(i*3)+j));
           printf("\t%d",*(ptr+(i*3)+j));
        }
        printf("\n");
    }
}
int main()
{
system("cls");

int mat[row][col];
read(mat);
//print_matrix(mat);
print_array(mat);

return 0;
}
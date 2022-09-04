#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

int size =2;
int* matrix[2];

for(int i=0;i<size;i++)
{
    printf("Enter matix %d: ",i+1);
    matrix[i]=(int*)malloc(9*sizeof(int));
    for(int j=0;j<9;j++)
    {
        scanf("%d",&matrix[i][j]);
    }
}

for(int i=0;i<size;i++)
{
    for(int j=0;j<3*3;j++) 
    {
        if(j%3==0&&j!=0)
        printf("\n");
        printf("\t%d",matrix[i][j]);
        
        
    }
    printf("\n\n");
}

return 0;
}
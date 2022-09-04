#include<stdio.h>


void  print_matrix(int row, int column, int arr[][row])
{

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                printf("\t%d",arr[i][j]);
            }
            printf("\n");
        }

}

void get_matrix(int row, int column, int arr[][row])
{
    for(int i=0;i<row;i++)
    {
        printf("\n Enter the %d row: \n",i+1);
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    
}

void transpose(int row, int column, int arr[][row])
{
    int Ar[column][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            Ar[j][i]=arr[i][j];
        }
    }

     for(int i=0;i<column;i++)
        {
            for(int j=0;j<row;j++)
            {
                printf("\t%d",Ar[i][j]);
            }
            printf("\n");
        }
    
}


int main()
{

    printf("passing the 2 dimensional array as the parameter of the function : \n");
    int row, column;
    printf("\n Enter the row: ");
    scanf("%d",&row);
    printf("\n Enter the column: ");
    scanf("%d",&column);
    int Array[row][column];
    // int ar[2][2]={3,5,2,6};
    //print_matrix(2,2,ar);
    get_matrix(row,column,Array);
    print_matrix(row,column,Array);
    printf("\n After transpose : \n");
    transpose(row, column, Array);
   
    



    return 0;
}
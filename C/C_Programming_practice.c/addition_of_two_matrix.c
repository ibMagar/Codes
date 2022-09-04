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


void additon_of_matrix(int row, int column, int Arr1[][row], int Arr2[][row])
{
    int sum[row][column];
     printf("\n For the addition of two matrix the row and the column of two matrices must be same: \n");
     for(int i=0;i<row;i++)
     {
         for(int j=0;j<column;j++)
         {
            sum[i][j]=Arr1[i][j]+Arr2[i][j];
         }

     }

//printing the sum array 
printf("\n");
    for(int i=0;i<row; i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("\t %d",sum[i][j]);
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
    int Array1[row][column];
    int Array2[row][column];
    // int ar[2][2]={3,5,2,6};
    //print_matrix(2,2,ar);
    printf("\n Matrix: 1 \n");
    get_matrix(row,column,Array1);
    print_matrix(row,column,Array1);
    printf("\n Matrix : 2 \n");
    get_matrix(row,column,Array2);
    print_matrix(row,column,Array2);
    
    //addition

    additon_of_matrix(row,column,Array1,Array2);
   
   
    



    return 0;
}
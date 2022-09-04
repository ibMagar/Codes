#include<stdio.h>


void print_array()



{
    int i,j;
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}

void get_array(int arr[3][3])
{
    

    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the %d row: \n",i+1);
        for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }

    }


}




int main()
{


    int i,j;
    int row=0, column=0;
    printf("Enter the row of the matrix: ");
    scanf("%d",&row);
    printf("\n Enter the column of the matrix: ");
    scanf("%d",&column);

    int Arr1[row][column], Arr2[row][column], Arr3[row][column];
    
    printf("\n for the 1st matrices: \n");
    get_array(Arr1);
    printf("\n for the 2nd arary: \n");
    get_array(Arr2);
    printf("Hello");
    return 0;
}



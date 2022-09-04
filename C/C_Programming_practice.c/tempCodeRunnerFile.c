#include<stdio.h>

void print_matrix(int arr[3][3])
{
    int i,j;
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf('%d',arr[i][j]);
        }
        printf("\n");
    }
}

void get_array(int arr[3][3])
{
    

    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }

    }


}


void transpose(int arr[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][j];
            arr[j][i]=temp;
        }
    }
}

int main()
{

    printf("The transpose of matrix");

    int i,j;
    int Arr[3][3];

    //get array 
    get_array(Arr);
    print_array(Arr);
     
    transpose(Arr);
    print_array(Arr);
     


    return 0;
}
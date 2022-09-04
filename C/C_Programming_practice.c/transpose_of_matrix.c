
#include<stdio.h>

void print_array(int arr[3][3])
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


void transpose(int arr[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
    }
}

int main()
{

    

    int i=5,j;
    int Arr[3][3], Ar[3];

    printf("The transpose of matrix");
    //get array 
    get_array(Arr);
    printf("\n Before transpose: \n");
    print_array(Arr);
     
    transpose(Arr);
    printf("\n After transpose : \n");
    print_array(Arr);
    
    


    return 0;
}



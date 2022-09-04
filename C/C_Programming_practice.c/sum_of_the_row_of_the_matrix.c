#include<stdio.h>

int main()
{
    printf("The program");
    int i,j;
    int Arr[3][3];
    for(i=0;i<3;i++)
    {
        printf("\nEnter the %d row : \n",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",Arr[i][j]);

        }
        printf("\n");
    }
    

    int row_nbr;
    printf("\n Which row you want to get the sum : ");
    scanf("%d",&row_nbr);

    int sum=0;
    for(i=0;i<3;i++)
    {
        sum+=Arr[row_nbr-1][i];
    }
    printf("The sum of the %d row elements is : %d",row_nbr,sum);

    return 0;
}

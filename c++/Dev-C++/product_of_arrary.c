#include<stdio.h>

int main()
{
	
	int i=0,j=0;
	
	int row, column;
	
	printf("Enter the row: ");
	scanf("%d",&row);
	printf("\n Enter the column: ");
	scanf("%d",&column);
	
	int arr[3][3];
	
	int sum=0;
	
	for(i;i<3;i++)
	{
		printf("Enter the %d row:",i+1);
		for(j;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	//transpose
	i=0;
	j=0;
	for(i;i<3;i++)
	{
		
		for(j;j<3;j++)
		{
			int temp = arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
		
	}
	
	printf("\n");
	i=0;
	j=0;
	for(i;i<3;i++)
	{
		for(j;j<3;j++)
		{
			printf("\t %d",arr[i][j]);
		}
		printf("\n");
	}
	
	

	
	return 0;
}

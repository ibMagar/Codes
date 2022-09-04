#include<stdio.h>

void print_array(int ar[][] , int size1, int size2)
{
	
	int i=0,j=0;
	for(i;i<size1;i++)
	{
		for(j;j<size2;j++)
		{
			printf("%d",ar[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
}




/*
void get_array(int ar[][], int size1, int size2)
{
	
	printf("\n Enter %d number of elements",size1*size2);
	int i=0,j=0;
	for(i;i<size1;i++)
	{
		for(j;j<size2;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("\n Reading array completed: \n");
	
}
*/

int main()
{
	
	int size1, size2;
	printf("Enter the row of matrix : ");
	scanf("%d",&size1);
	printf("\n Enter the column of matrix: ");
	scanf("%d",&size2);
	int array[size1][size2];
	
	
	
    int i=0,j=0;
    for(i;i<size1;i++)
    {
    	printf("\nEnter the %d row",i);
    	for(j;j<size2;j++)
    	{
    		scanf("%d",&array[i][j]);
		}
    	
	}
	
	i=0;
	j=0;
	
	for(i;i<size1;i++)
	{
		for(j;j<size2;j++)
		{
			printf("\t %d",array[i][j]);
		}
		printf("\n");
	}
	
	
	
	//get_array(array,size1,size2);
	//print_array(array,size1,size2);
	
	
	
	
	return 0;
}

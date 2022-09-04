// write a c program to print the elements in a reverse order 

#include<stdio.h>

int main()
{
	
	//read the array elemens
	
	int size;
	int i=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("\n");
	for(i;i<size;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\n");
	
	i=size-1;
	for(i;i>=0;i--)
	{
		
      printf("%d\n",arr[i]);
		
	}
	
	
	return 0;
	
}

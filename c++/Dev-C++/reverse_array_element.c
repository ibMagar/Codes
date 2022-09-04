#include<stdio.h>

void readArray(int array[] , int size)
{
	int i=0;
	for(i;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
}


void change_the_array_element(int arr[], int size)
{
	
	int j=0,k=0;

	for(j;j<size;j++)
	{
		int k=0;
	/*	
		while(arr[j]!=0)
		{
			k=k*10 +arr[j]%10;
			arr[j]=arr[j]/10;
			
		}
		arr[j]=k;
		k=0;
		*/
	  arr[j]=change(arr[j],k);
		
	}

	
}

int change(int a ,int b)
{
	int z;
	while(a>0)
	{
	
	
	z=a%10;
	b*=10 + z;
	a/=10;
    }
    
	return b;
	
}

void print_value(int ar[],int size)
{
	int i=0;
	for(i;i<size;i++)
	{
		printf("\n%d",ar[i]);
	}
}

int main()
{
	int size;
	printf("\n Enter the size: ");
	scanf("%d",&size);
	int Arr[size];
	printf("\n Enter %d integer values\n",size);
	readArray(Arr,size);
	change_the_array_element(Arr,size);
	print_value(Arr,size);
	return 0;
}

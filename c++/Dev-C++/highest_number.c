#include<stdio.h>


/*int highest_number(int[20] arr)
{
	int a=1;
	int h_nbr=arr[0];
	
	for(a;a<20;a++)
	{
	   if(arr[a]>h_nbr)	
	   {
	   	h_nbr=arr[a];
	   }
	}
	return h_nbr;
}*/




int main()
{
	// The highest number of the array
	
	int Arr[20];
	
	int i=0;
	for(i=0;i<20;i++)
	{
		printf("\nEnter number %d :",i+1);
		scanf("%d",&Arr[i]);
	}
	
	
	int a=1;
	int h_nbr=Arr[0];
	
	//
	for(a;a<20;a++)
	{
	   if(Arr[a]>h_nbr)	
	   {
	   	h_nbr=Arr[a];
	   }
	}
	//
	
	
	
	printf("\n\n Highest number is: %d",h_nbr);
	
	
	return 0;
}

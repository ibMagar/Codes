#include<stdio.h>


int for_multiple_of_three(int l,int sum)
{
	int i=0;
	for(i;i<=l;i++)
	{
		if(i%3==0)
		{
			sum+=i;
		}
		if(i%5==0)
		{
			sum+=i;
		}
	}
	

	
	
	return sum;
}


int main()
{
	
	printf("Enter the limit ");
	int limit;
	scanf("%d",&limit);
	int sum_of_three;
	sum_of_three=for_multiple_of_three(limit,sum_of_three);
	printf("%d is the sum of multiples of 3 until %d",sum_of_three,limit);
	
	return 0;
}

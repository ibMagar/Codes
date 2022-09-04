          //palindrome
#include<stdio.h>

int main()

{
	
	int number;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	int n=number;
	int rev_number=0;
	while(n>0)
	{
		
		int x = n%10;
		rev_number*= 10;
		rev_number+=x;
		n=n/10;
		
		
	}
	
	printf("\n%d",rev_number);
	
	if(number==rev_number)
	{
		printf("\n the number is palindrome!");
	}
	else
	{
		printf("\n the number is not palindrome");
	}
	
	
	return 0;
	
}

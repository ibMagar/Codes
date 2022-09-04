#include<stdio.h>
#include<conio.h>

int return_static_variable();

int main()
{
	//Topics
	printf("Static And Global Variables\n");
	printf("Recursive Functions \n");
	printf("Multi-Dimensional Array \n");
	printf("Pointers and Pointers of Pointers\n");
	printf("gets() and fgets() \n");
	printf("\n");
	printf("\n");
	
	//
	
	
	//variables
	
	
	int x=20;
	int arr[2][3];
	
	
	//
	
	//Body
	
	
	//printf("%d",return_static_variable());
	//scan_array();
	//for_pointers();
	//for_pointers_of_pointers();
	for_gets_and_fgets();
	
	
	//
	printf("\n");
	printf("\n");
	return 0;
}

void scan_array()
{
	int array[2][3];
	int x=1;
	int i,j;
	printf("\n");
	for( i=0;i<2;i++)
	{
		for( j=0;j<3;j++)
		{
			printf("\n  array no.%d: ",x);
			scanf("%d",&array[i][j]);
			x++;
		}
		
	}
}

int return_static_variable()
{
	static int x=25;
	return x;
}
//printf("%c",&c);

void for_pointers()
{
	char name[20]="Srinivas Reddy";
	char *p;
	p=name;
/*	while(*p!="\0")
	{
		printf("%c",*p);
		p++;
	}
*/
	int i=0;
	for(i=0;i<20;i++)
	{
		printf("%c",*p);
		p++;
	}
	
}

 void for_pointers_of_pointers()
 {
 	
 	int x=24;
 	int*ptr;
 	int **ptrPtr;
 	ptr=&x;
 	ptrPtr=&ptr;
 	printf("\n\n%d",**ptrPtr);
 	
 	//
 	
 }

	void for_gets_and_fgets()
	{
		
		char name[20];
		printf("\n print your name:");
		
		gets(name);
		printf("\n Name : %s",name);
		
		char Name[30];
		printf("\n Enter your name again:");
		fgets(Name,15,stdin);
		printf("\n Name : %s",Name);
		
		
	}






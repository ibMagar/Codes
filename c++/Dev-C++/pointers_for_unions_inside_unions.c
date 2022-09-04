#include<stdio.h>
#include<conio.h>
#include<string.h>


struct Structure {
	int id;
	char name[30];
};


union Un {
	float x;
	int y;
	union {
		char a;
	
	}inner_un;
};



void for_Unions_inside_union(union Un* union_ptr)
	{
	    
	printf("\nBefore the function : ");
	printf("\nfloat value: %f", union_ptr->x);
	printf("\nchar value a : %c", union_ptr->inner_un.a);

	printf("\n\n After changing the values: ");
	union_ptr->x = 2.5;
	union_ptr->inner_un.a = 'c';
	printf("\n float value: %f", union_ptr->x);
	printf("\n char value: %c", union_ptr->inner_un.a);

	}

int main()
{

	union Un u = { 2.5 };
	for_Unions_inside_union(&u);



	return 0;
}

#include<stdio.h>;



struct Structure {
	int id;
	char name[20];
	union{
		int value1;
		char value2;
	}un;
};

void for_structure_ptr(struct Structure* Str)
{
	
	printf("\n Previous values:  ");
	printf("\n id: %d",Str->id);
	printf("\n name: %s",Str->name);
	printf("\n value1: %d",Str->un.value1);               // Not using the below line coz here the structure is the acting as the pointer but the union inside it is not the pointer ,it's just the member of that pointer strucure
    //printf("\n value1: %d",Str->un->value1);
	
	Str->id=36;
	strcpy(Str->name,"C Programming");
	Str->un.value1=65;
	printf("\nCurrent values:");
	printf("\n id: %d",Str->id);
	printf("\n name: %s",Str->name);
	printf("\n value1 or value2: %d",Str->un.value1);
}

int main()

{
	
	struct Structure myStr={50,"Srinivas",{25,'a'}};
	for_structure_ptr(&myStr);
	
	
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");
 
int*ptr=calloc(10,sizeof(int));

for(int i=0;i<10;i++)     //inserting the values
{
    ptr[i]=i+1;
}

for(int i=0;i<10;i++)       //printing the values to check 
{
    printf("\t%d",ptr[i]);
}

int*ptr_2=realloc(ptr,5*sizeof(int));   // creating another pointer to point the 5 values of previous pointer
//sleep(5;
//free(ptr);
printf("\n");

for(int i=0;i<5;i++)
{
    printf("\t%d",ptr_2[i]);
}

ptr=NULL;
free(ptr);

printf("\n");
for(int i=0;i<10;i++)
{
    printf("\t%d",ptr_2[i]);
}

printf("\n size of ptr: %d",ptr_2.capacity());

return 0;
}
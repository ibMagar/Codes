#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
system("cls");

int* int_ptr = (int*)malloc(sizeof(int)*10);
printf("the size of the malloc is : %d byte(s)",sizeof(int_ptr));
printf("\n the size of the integer datatype is %d",sizeof(int));
printf("\nthe size of the integer pointer is %d",sizeof(int*));

return 0;
}
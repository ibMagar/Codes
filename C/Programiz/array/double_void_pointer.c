#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void double_void_pointer_function(void** void_ptr)
{
    //printf("the value of double void pointer is : %s", *((((char*))char*))void_ptr );
}

int main()
{
system("cls");

char name[20]="IB Darlami Magar";
void*first_void_pointer;
first_void_pointer=name;
 
 void*second_void_pointer=&first_void_pointer;


printf("the value of the double void pointer is: %s", *((char*)first_void_pointer) );
return 0;
}
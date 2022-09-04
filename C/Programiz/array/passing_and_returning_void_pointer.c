        //Working with void pointers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void* taking_and_returning_void_pointer_function(void* void_ptr)
{
    printf("the value of the void pointer is : ");
    printf("%c",*((char*)void_ptr));
    return void_ptr;
}

int main()
{
system("cls");

   char first_char_value = 'b';
   void *first_void_pointer;
   first_void_pointer=&first_char_value;
     
     void* second_void_pointer;
     second_void_pointer= taking_and_returning_void_pointer_function(first_void_pointer);
     printf("\nthe value of second void pointer is: %c", *((char*)second_void_pointer));

return 0;
}
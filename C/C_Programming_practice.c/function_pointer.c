#include<stdio.h>
#include<stdlib.h>

void fun_1()
{
    printf("\nThis is a function accessed through function pointer\n");
}

int fun_2(char a)
{
    printf("\nYou have accessed the char: %c through the function pointer\n",a);
}


int* fun_3(int* a, char b)
{
    printf("\nThis is a function which takes the int* and return int* and accessed throught function* \n");
    printf("int: %d and char: %c",*a,b);
    return a;

}

int function(int x, char y)
{
    printf("\nThis is a function. ");
    printf("\nX: %d Y: %c",x,y);
    return x;
}


void function_ptr_as_argument(int(*fun_ptr)(int ,char), int a , char b, float c)
{
    printf("\nThis is the function which takes the function pointer as the argument.");
    fun_ptr=function;
    fun_ptr(10,'B');
    printf("\n %d is integer value passed and %c is the char value and %.2f is the float value passed!",a,b,c);

}



int main()
{
    system("cls");
    
    printf("function pointers\n");
    //
    
    void (*funptr)(void)=fun_1;     // A function pointer is declared
    funptr();                       //the function is called through it's function pointer

    int (*funptr_2)(char)=fun_2;
    funptr_2('Z');

    //
    int* (*funptr_3)(int*,char)=fun_3;
    int y=10;
    int *x=&y;
    funptr_3(x,'B');
    //

    //function pointer as the function argument
    printf("\n\n");
    int (*fun_ptr_4)(int,char);
    function_ptr_as_argument(fun_ptr_4,20,'V',1.2);

    return 0;
}
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

inline int fun()
{

   cout<<"Inline function"<<endl;
   return 0;
}

inline void fun2();

int main()
{
system("cls");

fun();
fun();
fun2();
return 0;
}

inline void fun2()
{
    cout<<"Inline below the main function";
}
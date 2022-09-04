#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<typeinfo>

using namespace std;
int fun()
{
    return 10;
}
string fun2()
{
    return "hello world";
}
int main()
{
system("cls");

decltype(fun()) x;      // declaring the variable type from the function
x=80;
cout<<endl<<x;

decltype(fun2()) str;
cout<<endl<<typeid(x).name();
cout<<endl<<typeid(str).name();


return 0;
}
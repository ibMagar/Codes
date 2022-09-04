#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

int mul(int a, int b)
{
    return a*b;
}

int add(int a, int b)
{
    return a+b;
}

string append(string a, char c)
{
    return a+c;
}

int main()
{
system("cls");

int (*funptr)(int,int);
funptr=mul;
int a = funptr(2,3);
cout<<a;
funptr=add;
int b=funptr(2,3);
cout<<endl<<b;

string (*strfunptr)(string,char);
strfunptr=append;
string c=strfunptr("hello worl",'d');
cout<<endl<<c;



return 0;
}
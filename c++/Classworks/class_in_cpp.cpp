#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class myClass{
    public:
     myClass()
    {
        cout<<endl<<"Hey I am roushan Kumar";
    }
    string name="Roushan Kumar";
    int sal=10000;
};

int main()
{
system("cls");

myClass firstClass;
cout<<endl<<firstClass.name<<endl<<firstClass.sal;


return 0;
}
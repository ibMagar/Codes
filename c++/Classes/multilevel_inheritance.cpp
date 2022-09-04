#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;

class GrandClass{
public:
GrandClass()
{
    cout<<endl<<"Grand Class Constructor";
}
};

class Class:public GrandClass
{
    public:
    Class()
    {
        cout<<endl<<"Class constructor";
    }

};
class ChildClass:public Class{ 
public:
    ChildClass()
    {
       cout<<endl;
       GrandClass();
    }
};

class A:public GrandClass{
public:
A()
{
    cout<<endl;
}
};

class B:public A,public Class{
    public:
    B()
    {
        GrandClass();
        cout<<endl;
    }
};

int main()
{
system("cls");

ChildClass object;
//
cout<<endl<<"diamond Problem";
//diamond problem
B object_of_b;
//object_of_b.GrandClass();

return 0;
}
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
using namespace std;


void fun(int a,char* p)
{
    if(a==0)
    throw a;
    else if(p==NULL)
    throw p;
    else
    {
        cout<<endl<<a;
    }
}

int main()
{
system("cls");

//Simple try and catch blocks
try{
    throw 1;
    // This line of code is never executed
}
catch(int x)
{
    cout<<endl<<"error int "<<x;
}

// catch all 
try{
    throw 'a';

}
catch(int x)
{
    cout<<endl<<"Error int "<<x;
}
catch(...)
{
    cout<<endl<<"Default catch block";
}

// Using function inside the try block

try{
    fun(5,NULL);
    //fun(0,NULL);
}
catch(int x)
{
    cout<<endl<<"Error int "<<x;
}
catch(char* p)
{
    cout<<endl<<"Char pointer error";
}
catch(...)
{
    cout<<endl<<"Default catch block";
}



//Nested try and catch blocks
try{
    try{
    fun(5,NULL);
    //fun(0,NULL);
    }
catch(int x)
{
    cout<<endl<<"Error in function 'fun'  int "<<x;
}
catch(char* p)
{
    cout<<endl<<"Error in function 'fun' pointer error";
}

}

catch(int x)
{
    cout<<endl<<"Error int "<<x;
}
catch(char* p)
{
    cout<<endl<<"Char pointer error";
}
catch(...)
{
    cout<<endl<<"Default catch block";
}



return 0;
}
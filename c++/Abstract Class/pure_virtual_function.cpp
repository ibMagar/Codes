#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class Abs{
    string s;
    public:
       virtual void fun()=0;            // pure virtual function 
};
class Der:public Abs{
    string ds;
    public:
    Der()
    {
        ds="";
    }
    void fun()
    {
        cout<<endl<<"Derived pure virtual function";
    }
};

class Der2:public Abs{
    public:
    void show()
    {
        cout<<endl<<"show";
    }
};


int main()
{
system("cls");



Abs* a = new Der();     // base pointer accessing the pure virtual function
a->fun();

        // Der d;        Creation of Der class is possible
        // Der2 d;      Creation of Der2 is not possible as it doesnot implement pure virutal func and becomes abstract class too.

return 0;
}
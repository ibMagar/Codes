#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class base{
    public:
    virtual void fun()
    {
        cout<<"Hello";
    }
};
class der: public base{
    public:
    virtual void fun()
    {
        cout<<"hello";
    }
    
};

int main()
{
system("cls");

der d;
d.fun();

return 0;
}
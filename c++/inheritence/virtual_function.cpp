#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class base{
    public:
    virtual void fun()
    {
        cout<<endl<<"fun";

    }
};
class derived:public base{
    public:
    void fun()
    {
        cout<<endl<<"derived fun";
    }
};


int main()
{
system("cls");

base* b = new derived();
b->fun();

return 0;
}
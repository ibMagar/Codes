#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class one;

class two{
    int x=10;
    public:
    two(int x)
    {
        this->x=x;
    }
     void fun(one& o);
};
class one{
    int y=5;
    public:
    one(int x)
    {
        this->y=x;
    }
   friend void two::fun(one& o);
};
void two::fun(one& o)
{
    cout<<endl<<x<<endl<<o.y;
}



int main()
{
system("cls");

one o(5);
two t(3);
t.fun(o);


return 0;
}
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;
class one{
    protected:
    int x=10;
    public:
    one()
    {

    }
    one(int x)
    {
        this->x=x;
    }
    void show()
    {
        cout<<"x:"<<x;
    }
};
class two:public one{
    protected:
    int y;
    int z;
    public:
    two(int x, int y):one(x*2)
    {
        this->z=x;
        this->y=y;
    }
    void show()
    {
        one::show();
        cout<<endl<<"x:"<<z<<"  y:"<<y;
    }
};
int main()
{
system("cls");

two t(5,200);
t.show();

return 0;
}
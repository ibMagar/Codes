// Overloading the operator  using the friend function
#include<iostream>
using namespace std;

class sample{

    public:

    sample(int x)
    {
        this->x=x;
    }
    sample()
    {
        this->x=0;
    }
    void show()
    {
        cout<<endl<<x;
    }
    int x;
    friend void fun();
    friend sample operator +(sample &a, sample &b);
    
};

sample operator +(sample &a, sample &b)
{
    sample c;
    c.x=a.x+b.x;
    return c;
}

void fun()
{
    cout<<endl<<"Normal friend function";

}


int main()
{
    sample a(3),b(1),c;
    c=a+b;
    c.show();

    return 0;
}
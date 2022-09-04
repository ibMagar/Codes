// cpp program to overload the operators ( pre-increment , pre-decrement, post-increment, post-decrement, addition, substraction, multiplication, insertion, extraction, operators on compex number)
#include<iostream>
#include<stdlib.h>
using namespace std;

class complex{
    public:
    int a;
    int b;
    complex()
    {
        a=0;
        b=0;
    }
    complex(int a, int b)
    {
        this->a=a;
        this->b=b;
    }

    complex operator +(complex &a){
            complex c;
            c.a=this->a+a.a;
            c.b=this->b+a.b;
            //c.show();
            return c;
    }

    void operator =(complex a)
    {
        cout<<endl<<this->a+a.a<<"+"<<this->b+a.b<<"i";
    }

    complex operator *(complex &a)
    {
        complex c ;
        c.a= (this->a*a.a)-(this->b*a.b);
        c.b = (this->a*a.b)+(this->b*a.a);
        return c;
    }

    void show()
    {
        cout<<endl<<this->a<<"+"<<this->b<<"i";
    }

};

int main()
{
    system("cls");

    complex a(1,2),b(2,3),c;
    //c=a+b;
    //c.show();
    a=b;
    //cout<<endl;
    c+a=b;
    c.show();

     c=a*b;

    return 0;
}
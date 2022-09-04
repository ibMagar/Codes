#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;
template<class t>
class one{
    protected:
    t a;
    public:
    one()
    {

    }
    one(t x)
    {
      this->a=x;
    }
    void show()
    {
        cout<<endl<<a;
    }
};
template<class t , class t1>
class two:public one<t> 
{
    protected:
    t1 b;
    one<t> o;
    public:
    two(t a,t1 b) :o(a)
    {
        
        this->b=b;
    }
    void show()
    {
        o.show();
        cout<<endl<<b;
    }
};
int main()
{
system("cls");
// one<char> o('y');
// o.show();

two<int,int> t(4,10);
t.show();



return 0;
}
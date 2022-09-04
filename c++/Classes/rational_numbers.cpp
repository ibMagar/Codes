#include<iostream>

using namespace std;

class rational{
    private:
    int n,d;
    public:
    rational()
    {
        n=1;
        d=1;
    }
    void set(int x, int y)
    {
        n=x;
        d=y;

    }
    void show()
    {
        cout<<n<<"/"<<d;
    }
    rational operator +(rational &r2)
    {
       rational res;
       res.n=((n*r2.d)+(d*r2.n)) ;
       res.d=(n*r2.d);
       return res;
    }

    //
    rational mul(rational &r1, rational &r2)
    {
        rational r3;
        r3.n=r1.n*r2.d+r1.d*r2.n;
        r3.d=r1.d*r2.d;
        return r3;
    }
};

template<class T>
class rat{
    private:
    T a,b;
    public:
    void set(T a,T b)
    {
        this->a=a;
        this->b=b;
    }
    void show()
    {
        cout<<a<<"/"<<b;
    }
    rat operator*(rat &r2)
    {
        rat r3;
        r3.a=a*r2.a;
        r3.b=b*r2.b;
        return r3;
    }
     rat operator+(rat &r2)
    {
        rat r3;
        r3.a=a*r2.b + b*r2.a;
        r3.b=b*r2.b;
        return r3;
    }

    rat operator-(rat &r2)
    {
        rat r3;
        r3.a=a*r2.b - b*r2.a;
        r3.b=b*r2.b;
        return r3;
    }
    rat operator/(rat &r2)
    {
        rat r3;
        r3.a=a*r2.b;
        r3.b=b*r2.a;
        return r3;
    }
};

int main()
{

    // rational r1,r2;
    // r1.set(1,2);
    // r2.set(2,3);
    // rational r3=r1+r2;
    // cout<<endl;
    // r3.show();

    rat<int> r1,r2,r3;
    r1.set(1,2);
    r2.set(2,3);
    //addition
    r3=r1+r2;
    cout<<endl;
    r3.show();
    //sub
     r3=r1-r2;
    cout<<endl;
    r3.show();
    //mul
     r3=r1*r2;
    cout<<endl;
    r3.show();
    //div
     r3=r1/r2;
    cout<<endl;
    r3.show();

    return 0;
}
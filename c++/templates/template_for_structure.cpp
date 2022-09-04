#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;
struct c{
    int a;
    char b;
};

template<class T>
class sample{
    T a;
    public:
    sample(T a)
    {
        this->a=a;
    }
    void display()  // I want this function to display the 'a' variable  according to its data-type
    {
        if(typeid(a)==typeid(int))
        {
            cout<<endl<<"integer: "<<a;
        }
        else if(typeid(a)==typeid(struct c))
        {
            cout<<endl<<"struct"<<endl<<a.a<<endl<<a.b;   // displaying both values inside struct c;
        }
    }
};


int main()
{
system("cls");

sample<int> S1(10);
S1.display();

//for struct c
struct c c1;
c1.a=10;   c1.b='A';
sample<struct c> S2(c1);
S2.display();

return 0;
}
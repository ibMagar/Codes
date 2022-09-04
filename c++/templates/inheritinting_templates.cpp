#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

template<class T>
class A{
    T a;
    public:
    A()
    {
        cout<<"A";
    }

};

template<class T>
class B:public A<T>{
        T a;
        public:
        B()
        {
            //A<T>::A();
            cout<<"B";
        }
};


int main()
{
system("cls");
A<int> a;
B<int> b;


return 0;
}
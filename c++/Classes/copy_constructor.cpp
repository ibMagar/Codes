#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class C{
    int x;
    public:

    C()
    {
        cout<<"Default Constructor";
    }
    C(int x)
    {
        this->x=x;
    }
    C(C& a)
    {
        this->x=a.x;
    }
    void display()
{
    cout<<endl<<x;
}

};


int main()
{
system("cls");

C c1(20);

C c2=c1;// copy constructor is called here
//or
 // C c2(c1);
c2.display();

return 0;
}
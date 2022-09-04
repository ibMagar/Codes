#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class cls{
    int x;
    static char c;
    public:
    
    cls(int x)
    {
        this->x=x;
    }
    void display() const{
        cout<<endl<<x;
       // x=15;             // cannot change the variable using the const function

    }
    void insert(int x)
    {
        this->x=x;
    }

    static void changeStaticValue(int x)
    {
        c=x;
       // x=10;             cannot change the normal value
    }
  
};
char cls::c='X';

int main()
{
system("cls");

cls c1(10);
c1.display();

const cls c2(15);
c2.display();
//c2.insert(20);        // cannot call the non-constant function using the const object


return 0;
}
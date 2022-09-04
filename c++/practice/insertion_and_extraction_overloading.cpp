#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class s{
    string str;
    public:
    s(string st)
    {
        this->str=st;
    }
    friend istream& operator >> (istream& in, s& sCls)
    {
        in>>sCls.str;
    }
    friend ostream& operator << (ostream& out, s& sCls)
    {
        out<<sCls.str;
    }
};

int main()
{
system("cls");

s sCls("hello");
cin>>sCls;
cout<<sCls;

return 0;
}
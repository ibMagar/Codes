#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class cls{
    string s;
    public:
    cls()
    {
        s="";
    }
    cls(string s)
    {
        this->s=s;
    }
    void insert(string s)
    {
        this->s=s;
    }
    void display()
    {
        cout<<endl<<s;
    }
    
    
};

int main()
{
system("cls");

cls *clsObj = new cls("backstage");             // object of cls class created using dynamic memory
clsObj->display();

                                                // array of objects of cls class
cls *clsArray = new cls[5];
for(int i=0;i<5;i++)
{
    string s;
    cin>>s;
    clsArray[i].insert(s);
    
}
for(int i=0;i<5;i++)
{
    clsArray[i].display();
}



// {                                   // string array 
//         string *t=new string[5];
//         for(int i=0;i<5;i++)
//         {
//         cin>>t[i];
//         }
//         for(int i=0;i<5;i++)
//         {
//         cout<<endl<<t[i];

//         }
// }
delete clsObj;

return 0;
}
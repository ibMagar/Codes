#include<iostream>

using namespace std;
 class base{
    int var;
     void read()
    {
        cout<<"enter value: ";
        cin>>var;

    }
    public:
     void show()
     {
         read();
         cout<<endl<<"Variable is: "<<var;
     }
    
 };


int main()
{

   base b;
   b.show();

    



    return 0;
}
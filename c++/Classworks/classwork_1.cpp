#include<iostream>
#include<string>
using namespace std;

int main()
{


    string first_name="Roushan ";
    string last_name="Kumar";
    string name=first_name.append(last_name);
    cout<<name;
    cout<<endl<<"enter your name agarin: ";
    getline(cin,name);
    cout<<endl<<name;

    
    

    return 0;
}
// cpp program to enter the firs name, second name, and age 
// if first name is having a number, second name is having number
// or age is having character throw exception


#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<ctype.h>
using namespace std;

class details
{
    string firstName,secondName,age;
    public:
    details()
    {

    }
    void getfirstName()
    {
        string s;
        cout<<"enter first name: ";
        cin>>s;
        try{
        for(int i=0;i<firstName.length();i++)
        {
            if(isdigit(firstName[i]))
            throw 1;
        }
        }
        catch(int a)
        {
            if(a==1)
            cout<<endl<<"value contains integer";
        }
        firstName=s;
        
    }
    void getsecondName()
    {
        string s;
        cout<<"enter second name: ";
        cin>>s;
        try{
        for(int i=0;i<secondName.length();i++)
        {
            if(isdigit(secondName[i]))
            throw 1;
        }
        }
        catch(int a)
        {
            if(a==1)
            cout<<endl<<"value contains integer";
        }
        secondName=s;
    }
    void getAge()
    {
        string a;
        cout<<"enter the age: ";
        cin>>a;
        try{
            for(int i=0;i<age.length();i++)
            {
                if(!isdigit(age[i]))
                throw 1;
            }
        }
        catch(int a)
        {
            if(a==1)
            cout<<endl<<"age is not an integer";
        }
        age=a;
    }
    void print()
    {
        cout<<endl<<firstName<<" "<<secondName;
        cout<<endl<<"age : "<<age;
    }
};

int main()
{
system("cls");

details d;
d.getfirstName();
d.getsecondName();
d.getAge();
d.print();


return 0;
}
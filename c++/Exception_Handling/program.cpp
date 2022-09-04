// create a class student data memeer roll no, mark1, mark2, mark3, 
// if average is less than 50% throw userdefined exception

#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;
class lowAverageException:public exception{
    public:
    char* what()
    {
        cout<<endl<<"Average marks is less than 50%";
    }
}myexp;
class student{
    string name;
    int rollno;
    float mark1,mark2,mark3,average;
    public:
    student()
    {

    }
    void getdetails()
    {
        cout<<endl<<"enter name and roll no: ";
        cin>>name>>rollno;
    }
    void getMarks()
    {
        cout<<endl<<"enter the marks of three subject";
        cin>>mark1>>mark2>>mark3;
    }
    void getAverage()
    {
       
        float a;
        a=(mark1+mark2+mark3)/3;
        try{
            if(a<50)
            throw myexp;
            }
        catch(lowAverageException e)
        {
            e.what();
        }
        average=a;
    }
    void print()
    {
        cout<<endl<<"Name: "<<name<<endl<<"rollno: "<<rollno;
        cout<<endl<<"Average marks : "<<average;
    }

};
int main()
{
system("cls");
student s;
s.getdetails();
s.getMarks();
s.getAverage();
s.print();


return 0;
}
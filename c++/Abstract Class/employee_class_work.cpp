#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class employee{
    
    public:
    virtual int getData()=0;
    virtual int calculate()=0;
};
class permanent_employee:public employee{
    protected:
    int p_sal=1000;
    int number_of_days;
    int HRA=1000;
    public:
    permanent_employee(int x)
    {
        this->number_of_days=x;
    }
    int getData(){
        return p_sal;
    }
    int calculate()
    {
         return (p_sal*number_of_days)+HRA;
    }
};
class daily_employee:public employee{
protected:
    int d_sal=800;
    int number_of_days;
    public:
    daily_employee(int x)
    {
        this->number_of_days=x;
    }
    int getData()
    {
        return d_sal;
    }
    int calculate()
    {
        return (d_sal*number_of_days);
    }
};

int main()
{
system("cls");

employee*  e1 = new permanent_employee(5);
employee* e2 = new daily_employee(10);
cout<<endl<<"permanent employee: "<<e1->calculate();
cout<<endl<<"daily employee: "<<e2->calculate();


return 0;
}
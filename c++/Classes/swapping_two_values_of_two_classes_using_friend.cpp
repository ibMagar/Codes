#include<iostream>
using namespace std;
class secondClass;
class firstClass{
    int a;
    public:
    firstClass(int a)
    {
        this->a=a;
    }
    firstClass():a(5)
    {
        
    }
    int getVal()
    {
        return a;
    }
    friend void exchange(firstClass& , secondClass&);
};
class secondClass{
    int b;
    public:
    secondClass():b(3)
    {

    }
    secondClass(int b )
    {
        this->b=b;
    }
    int getVal()
    {
        return b;
    }
    friend void exchange(firstClass&,secondClass&);

};
void exchange(firstClass& f, secondClass& s)
{
    int temp=f.a;
    f.a=s.b;
    s.b=temp;
}
int main()
{


    firstClass f;
    secondClass s;
    exchange(f,s);
    cout<<endl<<"fistClass val: "<<f.getVal()<<endl<<"secondClass val: "<<s.getVal();


    return 0;
}
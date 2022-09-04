#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

template<class T>
void TemplateFunctionOne(T x)
{
    cout<<endl<<x;
}

template<class T>
T templateFunctionTwo(T x , T y)
{
    cout<<endl<<"x: "<<x<<"  y: "<<y<<"  ";
    return x;
}

//Multiple generic  values 
template <class T,class U>
U templatefunctionThree(T x, U y)
{
    cout<<endl<<" x :"<<x<< " Y: "<<y<<" ";
    return y;
}

// template class
 template<class A, class B>
 class templateClass
 {
     private:
     A x;
     B y;
     public:
     
     templateClass(A x, B y)
     {
         this->x=x;
         this->y=y;
     }
     void perform()
     {
        
        if(*(typeid(x).name())=='i' && *(typeid(y).name())=='i')
        {
            cout<<endl<<"The values are integers: "<<" sum: "<<x+y;

        }
        else if(*(typeid(x).name())=='c'|| *(typeid(y).name())=='c')
        {
            cout<<endl<<"One of the values is character: "<<"   x: "<<x<<"  y:"<<y;
        }
        // else if(*(typeid(x).name())=='Pc'|| *(typeid(y).name())=='Pc')
        // {
        //     cout<<endl<<"The values are string";
        // }
        

         //sum
     }

     void functionOutsideTheClass();
 };

 template<class A,class B>
 void templateClass<A,B>::functionOutsideTheClass()
 {
     cout<<endl<<"this is the function defined outside the template class";
 }
 


int main()
{
    system("cls");
    // TemplateFunctionOne(5);
    // TemplateFunctionOne(56.44);
    // TemplateFunctionOne("I am chitti the robot from template ");

    // cout<<endl<<templateFunctionTwo(3,4);

    //// template class 
    
    templateClass<int,int> intTemplateClass(3,4);
    intTemplateClass.perform();

     templateClass<char,char> templateClasstwo('C','A');
     templateClasstwo.perform();

     templateClass<char,int> templateClassThree('Z',9);
     templateClassThree.perform();

    //   templateClass<char[],char[]> templateclassfour("hello ","there");
    //   templateclassfour.perform();

     string name="hello";
     int a;
     cout<<endl<<endl<<"typeof : "<<typeid(name).name();
    cout<<endl<<endl<<"typeof : "<<typeid(a).name();
    //templateClasstwo.functionOutsideTheClass();
    

    return 0;
}
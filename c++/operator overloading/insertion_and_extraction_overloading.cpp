// // overload the insertion and extraction operation 


//The insertion and the extraction operator cannot be overloaded normally as other operatorl
// They must be overloaded differently using the iostream library
// The overloading cannot be simply done. 
// This operators overloading can be donly done using the friend function .

#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class sample{
    int x;
    public: 
    sample(int x)
    {
        this->x=x;
    }

    void show()
    {
        cout<<endl<<x;
    }

    friend istream& operator >>(istream& a, sample& b);
    friend ostream& operator <<(ostream& a, sample& b);

    



};


 istream& operator >>(istream& a, sample& b)
 {
     cout<<endl<<"enter the values: ";
     a>>b.x;
 }
 ostream& operator <<(ostream& a, sample& b)
 {
     a<<endl<<b.x;
 }


int main()
{
system("cls");

sample a(10);        
cin>>a;
cout<<a;



return 0;
}


// #include<iostream>
// #include<string>
// #include<cmath>
// #include<stdlib.h>

// using namespace std;

// class sample{
//     public:
//     int x,y;

//     friend istream& operator >>(istream& in, sample& s);
//     friend ostream& operator <<(ostream& out, sample& s);
// };

// istream& operator >>(istream& in, sample& s)
// {
//     cout<<endl<<"enter the values: ";
//     in>>s.x>>s.y;
// }

// ostream& operator <<(ostream& out, sample& s)
// {
//     out<<s.x<<" "<<s.y;
    
// }
// int main()
// {
// system("cls");


// sample s;
// cin>>s;
// cout<<s;

// return 0;
// }
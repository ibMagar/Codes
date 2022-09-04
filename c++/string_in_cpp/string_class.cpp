#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

int main()
{
system("cls");


//Input_functuions
string s1="pushpa";
//getline(cin,s1);
s1.push_back('o');
cout<<endl<<s1;
s1.pop_back();
cout<<endl<<s1;

// Capacity functions
string s2="Kolar Gold Mines";
cout<<endl<<s2.length();
s2.resize(10);
cout<<endl<<"resized to : "<< s2.length();
cout<<endl<<" capacity: "<<s2.capacity();
s2.shrink_to_fit();
cout<<endl<<"capacity shrinked to : "<<s2.capacity();
cout<<endl<<s2;


// Iterator functions
cout<<endl;
string s3 = "Computer and Humans";
string::iterator itr;
for(itr=s3.begin();itr!=s3.end();itr++)
{
    cout<<*itr;
}
cout<<endl;
for(itr=s3.end()-1;itr!=s3.begin()-1;itr--)
{
    cout<<*itr;
}


//Manipuating functions

string s4="Gaming Room";
char string_to_copy[7];
s4.copy(string_to_copy,6,0);
cout<<endl<<string_to_copy;

string s5="Study Room";
s5.swap(s4);
cout<<endl<<s4<<endl<<s5;

return 0;
}
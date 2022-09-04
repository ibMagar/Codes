#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<sstream>

using namespace std;


int main()
{
system("cls");

string s="I am a robot";

//using simple compare and remove concept
// int pos=0;
// while(pos<s.length())
// {
//     if(s[pos++]==' ')
//     s.erase(pos-1,pos-1);
// }

stringstream ss(s);
string s2="";
stringstream ss2(s2);
int word=0;
string words;
while(ss>>words)            // reading the values and storing into words
{
    ss2<<words;
}
cout<<s2;


//cout<<endl<<s;
return 0;
}
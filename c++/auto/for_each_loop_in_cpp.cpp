#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

int main()
{
system("cls");

auto str ={"abc", "cde", "efg", "ghi"};
for(auto s:str)
{
    cout<<endl<<s;
}

auto arr ={2,4,4,66,7,65};
for(auto a:arr)
{
    cout<<endl<<a;
}
return 0;
}
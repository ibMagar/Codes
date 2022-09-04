#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<vector>
#include<array>

using namespace std;

int main()
{
system("cls");

//using pointers
const char* strs[4]={"Binoy","Veerendra","Swapna","Maheshwori"};
for(int i=0;i<4;i++)
{
    cout<<endl<<strs[i];
}

// using 2d Array
cout<<endl<<endl;
char str[4][10]={"Venkat","Vamshi","Tanmay","Eshaan"};
for(int i=0;i<4;i++)
{
    cout<<endl<<str[i];
}


//using normal string class array

//using vector class 
cout<<endl;
vector<string> vstrs={"csgd","arvr","gad"};
vstrs.push_back("staff");
for(int i=0;i<4;i++)
{
    cout<<endl<<vstrs[i];
}

//using array class
cout<<endl<<endl;
array<string,4> astrs={"computer","projector","marker","window"};
for(int i=0;i<4;i++)
{
    cout<<endl<<astrs[i];
}
return 0;
}
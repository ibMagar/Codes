#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
   system("cls");
   

    string str="hi-buddy-i-am-a-programmer-";
    string token;
    int pos=0;
    while(str.length()>0)
    {
        pos=str.find('-');
        //cout<<endl<<pos<<endl;
        token=str.substr(0,pos);
        cout<<endl<<token;
        str.erase(0,pos+1);
        
    }
 
    return 0;
}
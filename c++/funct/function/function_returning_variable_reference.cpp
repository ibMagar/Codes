#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;
int num;
int& fun()
{
   
    return num;
}


int main()
{
system("cls");
fun()=55;
cout<<fun();

return 0;
}

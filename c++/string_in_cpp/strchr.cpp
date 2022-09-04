#include<iostream>
#include<cstring>
#include<cmath>
#include<stdlib.h>

using namespace std;

int main()
{
system("cls");

char s[]="Computer is an essential object in today's era";
char* p = strchr(s,'u');
cout<<endl<<p;
cout<<endl<<s;
cout<<endl<<p-s;
cout<<endl<<"position of letter is: "<<p-s+1;



return 0;
}
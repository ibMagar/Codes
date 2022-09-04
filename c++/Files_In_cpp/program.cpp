#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main()
{
system("cls");

string s;
int cost;
fstream fs("textFile.txt");
cout<<"enter the string value:";
getline(cin,s);
fs<<s;
fs.close();

return 0;
}
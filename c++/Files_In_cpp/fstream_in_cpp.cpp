#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
system("cls");
string string_variable;
ofstream myFile("working_file.txt");
myFile<<"9 This is my Working text file ";
myFile.close();
ifstream readFile("working_file.txt");
while(getline(readFile,string_variable))
{
    cout<<string_variable;
}
readFile.close();

ifstream ffile("working_file.txt");
int var;
ffile>>var;
cout<<endl<<var;

string temp;
ffile>>temp;
cout<<endl<<temp;
ffile>>temp;
cout<<endl<<temp;
getline(ffile,temp);
cout<<endl<<temp;





return 0;
}
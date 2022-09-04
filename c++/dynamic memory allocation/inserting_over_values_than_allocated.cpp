#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;


int main()
{
        system("cls");

        int *ptr = new int[1];
        for(int i=0;i<6;i++)
        {
            cin>>ptr[i];
        }
        for(int i=0;i<6;i++)
        {
            cout<<endl<<ptr[i];
        }

        delete[] ptr;


return 0;
}
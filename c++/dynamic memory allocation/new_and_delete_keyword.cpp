// New and Delete keyword are introduced to replace previous dma functions

#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

int main()
{
system("cls");
int size=5;
int *arr=new int[size];     // allocating the memory 

for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
for(int i=0;i<size;i++)
{
    cout<<endl<<arr[i];
}

delete[] arr;               // deallocating the data from the heap 


return 0;
}
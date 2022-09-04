#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

class ArrayClass{
    int size;
    int *arr;
    int length=0;
    public:
    ArrayClass()
    {
       
        this->size=1;
    }
    ArrayClass(int a)
    {
        
        this->size=a;
    }
    void display()
        {
            cout<<endl;
            for(int i=0;i<length;i++)
            {
                cout<<endl<<arr[i];
            }
        }
    void displayLength()
    {
        cout<<endl<<"Length of the arr is: "<<length;
    }
    void create()
    {
        arr=new int[size];
    }
    void append(int value)
    {
        arr[length]=value;
        length++;
    }
    void appendArray(int index)
    {
        int x;
        for(int i=0;i<index;i++)
        {
            cin>>x;
            arr[length++]=x;
            
        }
    }
    void appendArray(int index[])
    {
        int x;
        for(int i=0;i<=sizeof(index)/sizeof(int);i++)
        {
            x=index[i];
            arr[length++]=x;
            
        }
    }
    void insertArray(int index,int a[],int size)
    {
        if(index<0||index>length)
        return;
        
        length+=size;
        cout<<endl<<length;

        for(int i=length;i>index+size;i--)
        {
            arr[i-1]=arr[i-size-1];
        }
        for(int i=0;i<size;i++)
        {
            arr[index+i]=a[i];
        }
    }
    ~ArrayClass()
    {
        delete[] arr;
    }

    void insert(int index, int value)

    {
        if(index<0||index>length )
        return;
        for(int i=length;i>index;i--)
        {
            arr[i]=arr[i-1];

        }
        arr[index]=value;
        length++;
    }
    void delLast()
    {
        arr[length-1]=0;
        length--;
    }
    void del(int index)
    {
        if(index<0||index>length)
        return;
        for(int i=index;i<length;i++)
        {
            arr[i]=arr[i+1];
        }
        length--;

    }
    int sum()
    {
        int sum=0;
        for(int i=0;i<length;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
    int max()
    {
        int m=arr[0];
        for(int i=1;i<length;i++)
        {
            if(arr[i]>m)
            m=arr[i];
        }
    }
    int min()
    {
        int m=arr[0];
        for(int i=1;i<length;i++)
        {
            if(arr[i]<m)
            m=arr[i];
        }
    }
    int getIndexByValue(int value)
    {
        for(int i=0;i<length;i++)
        {
            if(arr[i]==value)
            return i+1;
        }
    }
    void exchangeIndex(int a, int b)
    {
        if((a<0||a>length)||(b<0||b>length))
        return;
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }



};

int main()
{
system("cls");
ArrayClass a1(50);
a1.create();
a1.append(60);
//a1.appendArray(3);
int arrVal[3]={1,2,3};
a1.appendArray(arrVal);
//a1.display();

a1.insert(0,50);
cout<<endl<<"display after inserting array";
a1.display();
a1.del(2);
cout<<endl<<"display after deleting the index ";
a1.display();
a1.displayLength();
a1.delLast();
cout<<endl<<"displaying after deleting last: ";
a1.display();

// inserting array into the index
int a[5]={9,9,9,9,9};
cout<<endl<<"inserted";
a1.insertArray(2,a,5);
cout<<endl<<"After inserting array into 2";
a1.display();
//
a1.insertArray(0,a,5);
cout<<endl<<"After inserting array into 0";
a1.display();

cout<<endl<<a1.getIndexByValue(50);

a1.exchangeIndex(4,5);
cout<<endl<<"AFter exchanging the value of index 4 and 5: ";
a1.display();




return 0;
}
// Binary serach

#include<stdio.h>
#include<conio.h>


void checkValue(int arr[],int min, int max,int value)
{

    int mid = (min+(max-1))/2;
    if(arr[mid]==value)
    {
        printf("We found it!");
    return;
    }
    else if(arr[mid]>value){
       return checkValue(arr,mid,value);
    }
    else if(arr[mid]<value)
    {
     return checkValue(arr,mid,max);
    }


}

int main()
{
       int arr[7]={1,2,3,4,5,6,7};
       checkValue(arr,0,7,3);

        retrun 0;    
}
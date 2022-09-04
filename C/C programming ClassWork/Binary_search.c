#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

int size,low,mid,hig;
printf("enter size: ");
scanf("%d",&size);
int array[size];
for(int i=0;i<size;i++) 
{
    scanf("%d",&array[i]);
}
//sorting

for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(array[i]>array[j])
        {
            int temp = array[i]; 
            array[i]=array[j];
            array[j]=temp;
        }
    }
}
printf("\n");
for(int i=0;i<size;i++)
{
    printf("\n%d",array[i]);
}
//

int n;
printf("\nenter the value to search: ");
scanf("%d",&n);
low=0;
hig=size-1;
while(low<=hig)
{
    mid = (low+hig)/2;
    if(array[mid]==n)
    {
        printf("element found at %d",mid);
        break;

    }
    else if(array[mid]>n)
    {
    
    hig=mid-1;
    }
    else if(array[mid]<n)
    {

    low=mid+1;

    }
    
}
return 0;
}
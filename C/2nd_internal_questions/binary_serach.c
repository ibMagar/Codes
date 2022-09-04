// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>




// Binary Search in C


#include <stdio.h>
int binary(int*array,int n,int lwr, int upr)
{
    if(upr>=lwr)
      {
   // int mid=((lwr+upr)/2);
   int mid = lwr + (upr-lwr)/2;
    if(array[mid]==n)
    {
    return mid;
    }
    else if(array[mid]>n)
    {
      return  binary(array,n,lwr,mid-1);
    }
    else if(array[mid]<n)
    {
        return binary(array,n,mid+1,upr);
        }
      }
    
    return -1;
    
}

// int binarySearch(int array[], int x, int low, int high) {
//   if (high >= low) {
//     int mid = low + (high - low) / 2;

//     // If found at mid, then return it
//     if (array[mid] == x)
//       return mid;

//     // Search the left half
//     if (array[mid] > x)
//       return binarySearch(array, x, low, mid - 1);

//     // Search the right half
//     return binarySearch(array, x, mid + 1, high);
//   }

//   return -1;
// }

int main()
{
system("cls");

//int array[]={2,1,3,5,4,7,6,9,8,0};
int array[]={1,2,3,4,5,6,7,8,9,0};
int n;
int upr= sizeof(array)/sizeof(int);
// for(int i=0;i<10;i++)
// {
//     scanf("%d",&array[i]);

// }


//sorting 
for(int i=0;i<10;i++)
{
    for(int j=i+1;j<10;j++) 
    {
        if(array[i]>array[j])
        {
            int temp = array[j];
            array[j]=array[i];
            array[i]=temp;
        }
    }
}

printf("\nenter the key: \n");
scanf("%d",&n);
int result= binary(array,n,0,upr-1);
if(result==-1)
{
    printf("Not found !");

}
else{
    printf("found at index %d ",result);
}

return 0;
}




// int main(void) {
//   int array[] = {3, 4, 5, 6, 7, 8, 9};
//   int n = sizeof(array) / sizeof(array[0]);
//   int x = 4;
//   int result = binarySearch(array, x, 0, n - 1);
//   if (result == -1)
//     printf("Not found");
//   else
//     printf("Element is found at index %d", result);
// }
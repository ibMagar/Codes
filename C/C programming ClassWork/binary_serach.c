#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int binary_search(int arr[], int lwr, int upr , int value)
{
      int mid = ((upr-lwr)/2)+lwr;
      if(arr[mid]==value) 
      {
          return mid;
      }
      else if(arr[mid]>value)
      {
          binary_search(arr,lwr,mid-1,value); 
      }
      else if(arr[mid]<value)
      {
          binary_search(arr,mid+1,upr,value);
      }
      return 0;
      
}
int main()


{

    system("cls");

    printf("\t\tBinary Search!\n");
    printf("Enter the size of the array: \n");
    int size,search_value,mid,i,j;
    scanf("%d",&size);
    int array[size];
    //bool value_inside_array=false;
   // printf("\nPlease enter %d values: \n",size);
    //taking input from the user
    for(i=0;i<size;i++)
    {   
        printf("\nvalue: ");
        scanf("%d",&array[i]);
    }

    //sorting the array elements
    for(i=0;i<size;i++)
    {
        for(j=i;j<size-1;j++)
        {
            if(array[i]>array[j])
            {
                int temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    int length = sizeof(array)/sizeof(int);

    printf("\n");
    printf("Please enter the value to search: ");
    scanf("%d",&search_value);
       
     int x = binary_search(array,0,length-1,search_value);
      if(x==0)
      {
        printf("\nThe value is not inside the list: ");
      }
      else
      {
          printf("\nThe value is inside the list: ");
      }
      
    
    


    


    return 0;
}
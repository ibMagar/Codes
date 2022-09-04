void merge(int* Arr, int* arr, int initial_point, int limit,int init)
{
    // if(init<limit-1)
    // {
    // Arr[initial_point]=arr[init];
    //     merge(Arr,arr,initial_point++,limit,init++); 
    // }
    // else
    // {
    //     return;
    // }


    int i;
    for(i=0;i<limit;i++,init++) {
        Arr[i]=arr[init];
    }

    
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{

    
    int size = nums1Size+nums2Size;
     int array[size];
    int i;
    
    merge(array,nums1,0,nums1Size,0);
   //merge(array,nums2,nums1,size,0);
    
    printf("Hello");
    for(i=0;i<size;i++)
    {
        printf("\n%d",array[i]);
    }
    
    double a =1.00;
    return a;
}
int main()
{
    system("cls");
    int a[2]={1,3};
    int b[1]={2};
    findMedianSortedArrays(a,b,2,1);

    return 0; //
}
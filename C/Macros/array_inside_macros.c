#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define IntArray 1,2,3,4

#define greater(a,b) ((a>b)?a:b)

int main()
{
system("cls");
int arr[4]={IntArray};
for(int i=0;i<4;i++)
{
    printf("\n%d",arr[i]);
}

printf("\n greater between 3 and 9 is : %d",greater(3,9));



return 0;
}
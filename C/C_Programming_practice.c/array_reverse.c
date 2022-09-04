#include<stdio.h>

int main()
{

   int arr[3][3];

   int i=0,j=0;
  for(i=0;i<3;i++)
   {
       printf("Enter %d row: ",i+1);
       for(j=0;j<3;j++)
       {
          
           scanf("%d",&arr[i][j]);
       }
       
   }
   

/*
  for ( i = 0; i < 3; i++)
    for ( j = 0; j < 3; j++)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
*/
   printf("\n");

   i=0;
   j=0;
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
   {

       printf("\t %d",arr[i][j]);
       
   }
   printf("\n");
   }
    
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");

      printf("\t\t Squate Root without Using primitive function");

      float n;
      float i=0.00;
      printf("\n Enter the value of n: ");
      scanf("%f",&n);

      if(n>=0.00)
      {
        
        for(i=0.00;(i*i)<=n;i=i+0.01)
        {
            
            if(i==3.00)
            {
                printf("Again hello");
            }
            if(i*i==n)
            {
                printf("The square root of %.2f is %.2f",n,i);
                break;
            }
        }
        printf("hello");
        

      }
      else
      printf("\nPlease enter the positive value: ");

    return 0; //
}
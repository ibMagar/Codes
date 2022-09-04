#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
    static int totalBill=0;

   typedef struct  {
     char billType[20];
     int currentUnit;
     int previousUnit;
     int payableBillUnit;
   }bills;


   void getInfo(bills* bill)
  {
    printf("Bill type: ");
    fflush(stdin);
    gets(bill->billType);
    printf("\nprevious Unit: ");
    scanf("%d",&bill->previousUnit);
    printf("current Unit: ");
    scanf("%d",&bill->currentUnit);
    bill->payableBillUnit=(bill->currentUnit)-(bill->previousUnit);
    totalBill+=bill->payableBillUnit;

  }
int main()
{
    system("cls");
    int i=0;
    int rate=10;
     bills billArray[3];
    //struct team *ptr;
    for( i=0;i<3;i++)
    {
   
     getInfo(&billArray[i]);
     

    }
    
    printf("\n Total bill amount  to pay is:  %d",totalBill*rate);
    return 0;
}
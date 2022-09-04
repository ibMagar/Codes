#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void print_array(int array[],int size)
{
    int i;
    
    for(i=0;i<size;i++)
    {
        printf("\t%d",array[i]);
    }
}

int main()
{
    system("cls");
    printf("SJF algorithm: ");

    printf("\nEnter the number of processes: ");
    int n;
    scanf("%d",&n);     //number of process

    int BT[n],AT[n],CT[n],TAT[n],WT[n],i,j,k;   // all the variables, arrays and loop counters
    float avg_TAT, avg_WT;

    // getting the BT values: 
    printf("\nEnter the burst time for every process: \n");
    for(i=0;i<n;i++)
    {
        printf("P%d: ",i+1);
        scanf("%d",&BT[i]);
    }

    printf("\t");
    for(i=0;i<n;i++)
    {
        printf("P%d\t",i+1);
    }

    printf("\nBT:  ");
    print_array(BT,n);
    
   //sorting the burst Time 
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(BT[i]>BT[j])
            {
                int temp = BT[j];
                BT[j]=BT[i];
                BT[i]=temp;
            }
        }
    }
    printf("\nsBT: ");
    print_array(BT,n);

    //copying the BT to anothe array
    int sBT[n];
    for(i=0;i<n;i++){
        sBT[i]=BT[i];
    }

    //
    
    //determining the completion time 
    CT[0]=BT[0];
    for(i=1;i<n;i++)
    {
        CT[i]=BT[i]+BT[i-1];
        BT[i]=CT[i];
    }
    printf("\nCT:  ");
    print_array(CT,n);

    //initializing the initial time to 0
    for(i=0;i<n;i++)
    {
        AT[i]=0;
    }
    printf("\nAT:  ");
    print_array(AT,n);

    for(i=0;i<n;i++)
    {
        TAT[i]=CT[i]-AT[i];
    }
    printf("\nTAT: ");
    print_array(TAT,n);
    
    //Waiting Time 
   //printf("\nsBT: ");
   // print_array(sBT,n);
    for(i=0;i<n;i++)
    {
        WT[i]=TAT[i]-sBT[i];
    }
    printf("\nWT:  ");
    print_array(WT,n);

    //for average values
    float sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        sum1+=TAT[i];
        sum2+=WT[i];
    }
    
    avg_TAT= (sum1/n);
    avg_WT=(sum2/n);
    printf("\n \t %.1f\t %.1f",sum1, sum2);
    printf("\n\t Average TAT: %.2f sec \n\t Average WT: %.2f sec",avg_TAT,avg_WT);
    

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    system("cls");

    srand(time(0));

    int low_limit,upr_limit;
    int life,value,computer_value,i;
    printf("\t\tNumber guessing Game: ");
    printf("\n\nEnter the lower limit : ");
    scanf("%d",&low_limit);
    printf("\nEnter the upr_limit : ");
    scanf("%d",&upr_limit);
   // printf("\nEnter the life limit: ");
   // scanf("%d",&life);
   life=5;

    for(i=life;i>0;i--)
    {
        computer_value= ( rand()%((upr_limit-low_limit)+low_limit));
        printf("\n\nLife left: %d",i);
        printf("\nGuess the Number:  ");
        scanf("%d",&value);
        if(value==computer_value)
        {
            printf("\n\t\t You won ");
            break;
        }
        else if(value>upr_limit|| value<low_limit)
        {
            printf("\n Please enter the number between the range: !");
        }
        else{
            printf("\nThe Number was : %d. Try again!  \n",computer_value);
        }
    }
    printf("\n\t\t Game Over");



    return 0; //
}
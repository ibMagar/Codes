#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

   struct team {
     char name[20];
     int score;
   };


   void getScore( struct team* player)
  {
    printf("\nplayer name: ");
    fflush(stdin);
    gets(player->name);
    printf("\nscore: ");
    scanf("%d",&player->score);
   // return player;
  }
int main()
{
    system("cls");
    int i=0;
    int totalScore=0; 
    struct team TeamA[3];
    //struct team *ptr;
    for( i=0;i<3;i++)
    {
   
     getScore(&TeamA[i]);
     

    }
    for( i=0;i<3;i++)
    {
        totalScore+=TeamA[i].score;
    }
    printf("\n Total score of the team is: %d",totalScore);
    return 0;
}
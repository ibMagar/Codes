#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


int check(char s[], int a, int b)
{
    
    for(int i=a;i<b;i++)
    {
        if(s[i]==s[i+1])
       {
        return 1;
       }
    }
    return 0;

}


 void sub_string(char str[])
{

    int size = strlen(str);
    int counter=1;
    char sub_string[size][size];
    int count[size];
    for(int i=0;i<size;i++)
    {
        char a=str[i];
         sub_string[i][0]=a;
         
        for(int j=i+1;j<size-1;j++,counter++)
        {
          
       
        if(check(str,i,j)==1)
        {
            break;
        }
       else{
            sub_string[i][j]=str[j];
            count[i]++;
           }

          }

        }
       
    for(int i=0;i<size;i++)
    {
        printf("\n size: %d\n",count[i]);
       for(int j=0;j<count[i];j++)
       printf("%c",sub_string[i][j]);
       

    }
}





int main()
{
system("cls");

char name[6]="Helle";


sub_string(name);



return 0;
}
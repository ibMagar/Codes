#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    printf("\t\t Fgets() and fputs() \n");
    char str1[20];
    
    //fgets()


    fgets(str1,10,stdin);
    printf("\n string is: \" %s\" ",str1);

    //fputs()
   char str2[]={"Hey there, i am using whatsapp"};
   printf("\n");
   fputs(str2,stdout);

    return 0;
}
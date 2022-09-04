#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void _strcmp()
{   
    printf("\n\nStrcmp(): \n");
    char str1[]="I love you";
    char str2[]="I love you too";
    int comparision = strcmp(str1,str2);
    printf("The comparision result is: %d",comparision);
    comparision = strcmp(str2,str1);
    printf("\nThe reverse comparision result is : %d",comparision);
}
void _strncmp()
{
    printf("\n\nStrncmp(): \n");
    char str1[]="I love you";
    char str2[]="I love you too";
    int comparision = strncmp(str1,str2,10);
    printf("The comparision  result of first 10 characters is: %d",comparision);
   
}


void _strcat()
{
    printf("\n\nstrcat(): \n");
    char str1[]="I love you,";
    char str2[]=" I love you too";
    strcat(str1,str2);
    printf("The concatination result is: %s",str1);
    
}

void _strncat()
{
    printf("\n\nstrncat(): \n");
    char str1[]="I love you,";
    char str2[]=" I love you too honey";
    strncat(str1,str2,15);
    printf("The concatination  result to 15th char is: %s",str1);
    
}

void _strchr()
{
    printf("\n\nstrchr(): \n");
    char str1[]="I love you";
    printf(" The first character of the sentence is : %c",*(strchr(str1,'I')));
}

void _strrchr()
{
    printf("\n\nstrrchr(): \n");
    char str1[]="I love you";
    printf(" The first character of the sentence is : %c",*(strrchr(str1,'u')));
}


void _strstr(){
    printf("\n\nStrstr(): \n");
    char str1[]="I love you";
    char str2[]="I love you too";
    printf("The first 6 character of the sentence is : ");
    printf("%c",*(strstr(str1,str2)));

}

int main()
{
    system("cls");

   
   // _strcmp();

    
   // _strncmp();

   
   // _strcat();

   
    //_strncat();

    
   // _strchr();
    
   // _strrchr();

  // _strstr();

    return 0;
}
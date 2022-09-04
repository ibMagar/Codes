#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    FILE *fp;
    fp=fopen("sample.txt","a+");
    char c;
    if(fopen!=NULL)
    {
    while((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
    }
    else
    {
        printf("\nfile not found!");
    }

    char info[30]="Hello sir i am from Hathway, Wifi. We have very special offer for you.";
    fputs("\nI am from Hyderabad",fp);
    
    fclose(fp);
    FILE* fptr;
    fp=fopen("sample.txt","w+");

     while((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
    

    return 0;
}
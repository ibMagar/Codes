#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


void readFile(FILE*fp)
{
    printf("\n");
    char c;
    while((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
}
int main(int argc, char* argv[])
{
system("cls");

FILE*fp1=fopen("thisFile.txt","r");
FILE*fp2=fopen("anotherFile.txt","w");
if(fp1!=NULL && fp2!=NULL)
{
    char c;
    while((c=fgetc(fp1))!=EOF)
    {
        //fprintf(fp2,"%c",c);
        fputc(c,fp2);
    }
}
fclose(fp1);
fclose(fp2);
FILE*f=fopen("anotherFile.txt","r");


readFile(f);
fclose(f);


return 0;
}
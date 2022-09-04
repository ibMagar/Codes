#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>



int main(int argc, char* argv[])
{
system("cls");



FILE *fp;
char name[20];



fp=fopen("first_file.txt","w");
if(fp!=NULL)
{
    fflush(stdin);
    gets(name);
    fputs(name,fp);
}
fclose(fp);
printf("\n");
fp=fopen("first_file.txt","r+");
if(fp!=NULL)
{
    char c;
    while((c=fgetc(fp))!=EOF)
    {
        if(islower(c))
        {
            c=toupper(c);
            
            printf("%c",c);
        }
        else

        {
          
            printf("%c",c);
        }
    }
}

return 0;
}
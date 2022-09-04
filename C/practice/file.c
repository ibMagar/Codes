#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void writeIntoFile(FILE*fp)
{
fprintf(fp, "%s", "  Hello Sir I am your big fan!");
}
void readFile(FILE*f)
{
    char c;
    while((c=fgetc(f))!=EOF)
    {
        printf("%c",c);
    }
}

void readFromFile(FILE*fp)
{
    char str[20];
    //fscanf(fp,"%s",str);
    fgets(str,40,fp);
    printf("\n%s",str);
}

//Main function

int main(int argc, char* argv[])
{
system("cls");

FILE*fp=fopen("thisFile.txt","w");
if(fp!=NULL)
{
    writeIntoFile(fp);

}else{
    printf("error");
}
fclose(fp);

FILE*f=fopen("thisFile.txt","r");
if(f!=NULL)
{
    //readFile(f);
    readFromFile(f);
}else
{
    printf("\n error");
}


fclose(f);




return 0;
}
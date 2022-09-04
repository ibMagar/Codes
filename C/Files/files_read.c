#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(int argc, char* argv[])
{
system("cls");

FILE* f;
f=fopen("file_1.txt","r+");
if(f==NULL)
{
    printf("\nfile error!");
}
else
{
    int a ,b=3;

    //a=10;
   //fprintf(f,"%s","I am working");

    //reading the file 
    // char c;
    // while((c=fgetc(f))!=EOF)
    // {
    //     printf("%c",c);
       
    // }

    fscanf(f,"%d",&a);
    printf("\n%d",a);
   
}
fclose(f);

return 0;
}
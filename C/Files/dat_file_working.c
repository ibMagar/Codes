#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(int argc, char* argv[])
{
system("cls");
char info[]="C Programming ";
int a=100;
float b=2.00;
FILE*datFile;
datFile=fopen("file_1.txt","w");
if(datFile!=NULL)
{


    fprintf(datFile,"%s",info);
    fprintf(datFile,"%d ",a);
    fprintf(datFile,"%f ",b);
    //
    //scanning

     fscanf(datFile,"%s %s",info);
     fscanf(datFile,"%d",&a);
     fscanf(datFile,"%f",&b);

    //printing
    printf("\n%s\n%d\n%f",info,a,b);

}else
{
    printf("file error");
}


fclose(datFile);

return 0;
}
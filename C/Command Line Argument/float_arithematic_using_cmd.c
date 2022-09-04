#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(int argc, char* argv[])
{
system("cls");

if(argc>1)
{
   printf(" operation : %s",argv[1]);
   printf("\n values: %s  and  %s",argv[2],argv[3]);
    float a = atof(argv[2]);
    float b = atof(argv[3]);
  
   if(strcmp(argv[1],"add")==0)
    printf("\nResult: %.2f", (float)(a+b));
    else if(strcmp(argv[1],"sub")==0)
    printf("\nResult: %.2f", (float)(a-b));  
   else if(strcmp(argv[1],"mul")==0)
    printf("\nResult: %.2f", (float)(a*b));
   else if(strcmp(argv[1],"div")==0)
    printf("\nResult: %.2f", (float)(a/b));
    else
    printf("\nOperation invalid!");
  
    
}

return 0;
}
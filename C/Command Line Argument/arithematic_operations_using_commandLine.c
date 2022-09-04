#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main(int argc, char* argv[])
{
system("cls");
int a,b;

if(argc>1)
{
    printf("\nstarting");
        a=atoi(argv[2]);
        b=atoi(argv[3]);
     if(strcmp(argv[1],"add")==0)
     {
        printf("\nsum: %d",a+b);
       
     }
     else if(strcmp(argv[1],"sub")==0)
     {
        
        printf("\nsum: %d",a-b);
     }
     else if(strcmp(argv[1],"mul")==0)
     {
        
        printf("\nsum: %d",a*b);
     }
     else if(strcmp(argv[1],"div")==0)
     {
         
        printf("\nsum: %d",a/b);
     }
     else if(strcmp(argv[1],"mod")==0)
     {
         
        printf("\nsum: %d",a%b);
     }
     else
     {
         printf("invalid operation");
     }

    
    
}
else 
{
    printf("\nVery few arguments!");
}


return 0;
}
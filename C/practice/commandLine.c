#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(int argc, char* argv[])
{
system("cls");

if(argc>0)
{
    // for(int i=0;i<argc;i++)
    // {
    //     printf("\n %s",argv[i]);
    // }
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);
    int z= x+y;
    printf("%d",z);


}

return 0;
}
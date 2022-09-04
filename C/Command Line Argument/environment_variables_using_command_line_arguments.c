#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>



int main(int argc, char *argv[], int *envp[])
{


printf("no of command line arguments is : %d",argc);
printf("\n");


int i=0;
while(envp[i]!=NULL)
{

    printf("\n%s",envp[i]);
    i++;

}
return 0;
}
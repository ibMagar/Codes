#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Pre-definede Macros");
    printf("\nTime: %s",__TIME__);
    printf("\nDate: %s",__DATE__);
    printf("\nFile: %s",__FILE__);
    printf("\nLine: %d",__LINE__);
    //printf("\nNo. of seconds: %d",__TIME__);
   

    return 0;
}
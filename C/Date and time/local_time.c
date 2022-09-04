#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    system("cls");
    struct tm* local_time;
    time_t t = time(NULL);
    local_time =localtime(&t);
    printf(" Local date and time: %s",asctime(local_time));


    //ANOTHER METHOD
    time_t org_format_time;
    time(&org_format_time);
    printf("original date and time: %s",asctime(gmtime(&org_format_time)));
    return 0;
}
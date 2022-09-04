#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Date{
    int year;
    int month;
    int day;
};

struct Date read_Date()
{
    struct Date D;
    printf("\nYear: ");
    scanf("%d",&D.year);
    printf("\nMonth: ");
    scanf("%d",&D.month);
    printf("\nday: ");
    scanf("%d",&D.day);
    return D;
}

int compare_Dates(struct Date Date1, struct Date Date2)
{
    if(Date1.year==Date2.year)
    {
        if(Date1.month==Date2.month)
        {
            if(Date1.day==Date2.day)
            { return 1;
            }
        }
    }
    return 0;
}

int main()
{
system("cls");

struct Date Date1,Date2;

Date1=read_Date();
Date2=read_Date();

printf("\n %d",compare_Dates(Date1,Date2));

return 0;
}
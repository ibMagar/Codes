#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

enum month{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};

int main()
{
system("cls");


enum month value;
printf("enter the value: ");
scanf("%d",&value);
switch(value)
{
    case jan: printf("\nJanaury"); break;
    case feb: printf("\nFebruary"); break;
    case mar: printf("\nMarch"); break;
    case apr: printf("\nApril"); break;
    case may: printf("\nMay"); break;
    case jun: printf("\nJune"); break;
    case jul: printf("\nJuly"); break;
    case aug: printf("\nAugust"); break;
    case sep: printf("\nSeptember"); break;
    case oct: printf("\nOctober"); break;
    case nov: printf("\nNovember"); break;
    case dec: printf("\nDecember"); break;
    default: printf("\nwrong month value");
}
printf("\ntime: %s",__TIME__);
return 0;
}
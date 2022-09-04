#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

float* x = (float*)malloc(sizeof(float));
float* y = (float*)malloc(sizeof(float));
float* sum = (float*)malloc(sizeof(float));
scanf("%f%f",x,y);
*sum=*x+*y;
printf("\n%f",*sum);
return 0;
}
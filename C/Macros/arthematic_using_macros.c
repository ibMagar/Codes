#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<error.h>

#define square(x) x*x

#define quadrant(x) square(x)*square(x)
#define sentence(x) printf("\nvalue: %s",x)

#define error printf("\n This is an error detected by macros. please read code")

#define area(a,b) a*b

int main()
{
system("cls");

printf("enter the number value: ");
//int x;
//scanf("%d",&x);
printf("\n %d",square(3));

printf("\n quadrant: %d",quadrant(3));

char charArray[20]="Hello everybody";

sentence(charArray);
error;

printf("\n%s","")


return 0;
}
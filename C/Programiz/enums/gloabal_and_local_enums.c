#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

enum global_enums {a=1,b,c};

int main()
{
system("cls");

enum global_enums GEnum=c;
enum local_enums{ A,B,C};
enum local_enums LEnum=B;


printf("Global enum value: %d",GEnum);
printf("\nLocal enum value: %d",LEnum);

//
printf("\nsize of the gloabal enum: %d Byte(s)",sizeof(GEnum));
printf("\nsize of the local enum: %d Byte(s)",sizeof(LEnum));

return 0;
}
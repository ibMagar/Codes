#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
system("cls");

float angle_in_degree;
float sin_value,cos_value,tan_value;
scanf("%d",&angle_in_degree);

//float angle = angle_in_degree/M_PI;
float angle = angle_in_degree;
  
sin_value=sin(angle);
cos_value=cos(angle);
tan_value=tan(angle);

printf("\n sin\(%.2f\): %.2f",angle,sin_value);
printf("\n cos\(%.2f\): %.2f",angle,cos_value);
printf("\n tan\(%.2f\): %.2f",angle,tan_value);
return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    system("cls");
    printf("\t\tQuadratic Equation ");

    printf("\n\t\tThe quadratic form is \" ax^2+bx+c \"");

    double a,b,c,x1,x2;
    printf("\nEnter the value of a: ");
    scanf("%lf",&a);
    printf("\nEnter the value of b: ");
    scanf("%lf",&b);
    printf("Enter the value of c: ");
    scanf("%lf",&c);

    double pre_x=(b*b)-(4*a*c);
    
    if(pre_x>=0)
    {
    x1 = (-b - sqrt(pre_x))/(2*a);
    x2 = (-b + sqrt(pre_x))/(2*a);
    printf("\n\n x1 : %.2lf ",x1);
    printf("\nX2: %.2lf",x2);
    }
    else
    {
        
    printf("Please enter the valid value: ");

   }
    
   





    return 0;
}
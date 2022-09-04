#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int romanToString(char str[])
{
    int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
    int sum=0, previous_value=M,counter=0;
    while(counter<strlen(str))
    {
        int value =0;
        switch(str[counter])
        {
            case 'I':value=I; break;
            case 'V':value=V; break;
            case 'X':value=X; break;
            case 'L':value=L; break;
            case 'C':value=C; break;
            case 'D':value=D; break;
            case 'M':value=M; break;
            default: value=0;
            
            
        }
        if(previous_value>value)
        {
            sum+=value;
        }
        else if(previous_value<value)
        {
            sum-=previous_value*2;
            sum+=value;
        }
        else if(previous_value==value)
        {
            sum+=value;
        }
        previous_value=value;
        counter++;
    }
    return sum;
}

int main()
{
system("cls");

char string_value[10];
fgets(string_value,10,stdin);
printf("the vlaue is: %d",romanToString(string_value));

return 0;
}
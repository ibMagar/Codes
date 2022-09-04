#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
system("cls");

reverse_string();

return 0;
}
void reverse_string()
{
    char c;
    scanf("%c",&c);
    if(c!='0')
    {
        reverse_string();
        printf("%c",c);
    }
}
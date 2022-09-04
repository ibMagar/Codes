
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void reverse(char[],int,int,int);

int main()
{
system("cls");

char str[15];
fgets(str,15,stdin);
// gets(str);

int size = strlen(str);

                    //simple method (linear)

// if(size%2==0) 
// {
//     for(int i=0;i<(size/2);i++)
//     {
//         char temp = str[i];
//         str[i]=str[size-i-1];
//         str[size-i-1]=temp;
//     }
// }
// else if(size%2==1)
// {
//    for(int i=0;i<(size/2)+1;i++)
//    {
//        char temp = str[i];
//        str[i]=str[size-i-1];
//        str[size-i-1]=temp;
//    }
// }               
// puts(str);

                    // recursive reverse (recursion)

if(size%2==0)
{
    reverse(str,size,(size/2),0);
}
else if(size%2==1)
{
    reverse(str,size,(size/2)+1,0);
}

puts(str);

return 0;
}

void reverse(char str[],int size,int mid,int i)
{
    if(i<mid) 
    {
        char temp = str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
        reverse(str,size,mid,++i);
    }
    else return;
}


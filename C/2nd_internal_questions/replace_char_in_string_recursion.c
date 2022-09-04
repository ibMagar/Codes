#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void replace(char*,int,int,char,char);
void rep(char str[])
{
 static int i=0;
 if(str[i]=='a'|| i<strlen(str))
 {
     str[i]=='b';
     rep(str);
 }else
 {
     return;
 }
 

}
int main()
{
system("cls");

char str[20];
fgets(str,20,stdin);
char a,b;
// scanf(" %c %c",&a,&b);
// replace(str,20,0,a,b);
rep(str);
puts(str);
return 0;
}
void replace(char str[],int i,int n,char a, char b)
{
    if(n<i)
    {
        if(str[n]==a)
        str[n]=b;
        replace(str,20,n++,a,b);
        
    }
    else
    {
        return;
    }
    
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
system("cls");

char info[5][8];
for(int i=0;i<5;i++)
{
    fgets(info[i],8,stdin);

}
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
        if(strcmp(info[i],info[j])>0)
        {
            char temp[8];
            strcpy(temp,info[i]);
            strcpy(info[i],info[j]);
            strcpy(info[j],temp);
        }
    }
}
printf("\n\n");
for(int i=0;i,5;i++)
{
    puts(info[i]);
}

return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int i
system("cls");

//taking the input

printf("Please enter a letter: ");
int x=15,y=15;

while(1)
{
    if(x<1) x=1;
    else if(x>49) x=49;
    else if(y<1) y=1;
    else if(y>28) y=28;
system("cls");

for(int i=0;i<30;i++)
{
    printf("#");
    for(int j=0;j<50;j++)
    {
        
        if(i==y&&j==x) printf("0");
        else if(i==0||i==29) printf("#");
        else printf(" ");
        

    }
    printf("#\n");

    if(_kbhit())
    {
        if((x>0&&x<49)&&(y>0&&y<29))
        {
        switch(_getch())
        {
            case 'a': x--; break;
            case 's': y++; break;
            case 'w':y--; break;
            case 'd':x++; break;
            default: break;
        }
        }
    }
}


}
return 0;
}
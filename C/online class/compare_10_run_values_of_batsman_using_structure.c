#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Batsman{
    char name[20];
    int run_value[10];
    int total_run;
};

struct Batsman readValue()
{
    struct Batsman B;
    printf("\nname: ");
    fflush(stdin);
    gets(B.name);
    printf("\n enter 10 run values: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&B.run_value[i]);
        B.total_run+=B.run_value[i];
    }

    return B;
}

int  compare_Batsman(struct Batsman  B1, struct Batsman B2)
{
    if(B1.total_run>B2.total_run)
    {
        return 1;
    }
    else if(B1.total_run<B2.total_run)
    {
        return 2;
    }
    else 
    return 0;

}

int main()
{
system("cls");

struct Batsman  B1,B2;
B1=readValue();
B2=readValue();

printf("\n %d",compare_Batsman(B1,B2));

return 0;
}
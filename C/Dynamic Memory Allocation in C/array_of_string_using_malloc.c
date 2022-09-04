#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
system("cls");
int size=3;
//char* a = (char*)calloc(size,sizeof(char));
//char* b = (char*)calloc(size,sizeof(char));

//char** c = (char**)malloc(size*size*sizeof(char));
char* string_array[3];

for(int i=0;i<size;i++)
{
    string_array[i]=(char*)malloc(10);
    gets(string_array[i]);
}
printf("\n");
for(int i=0;i<size;i++)
{
    
    puts(string_array[i]);
    
}



return 0;
}
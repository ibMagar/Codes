#include<stdio.h>

int main() {

    int char_count, num_lines, num_tabs, num_spaces;
    char ch;

    num_lines = 0;
    num_tabs = 0;
    num_spaces = 0;



    FILE *fp;
    fp=fopen("workingFile.txt","r");
    if(fp!=NULL)
    {
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch==' ')
        num_spaces++;
        else
        char_count++;
    }
    }
    printf("tabs: %d\nletters: %d",num_spaces,char_count);

    fclose(fp);

}
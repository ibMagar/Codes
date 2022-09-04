#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
typedef struct{
    int sn;
    char name[20];
     union{
        char author_1[20];
        char author_2[20];
    }author;
    int price;
}Book;

Book* read_structure(Book* thisBook)
{
    printf("\nenter the sn: ");
    scanf("%d",thisBook->sn);
    printf("\nenter the name of the book: ");
    gets(thisBook->name);
    printf("\n enter the author name: ");
    gets(thisBook->author.author_1);
    printf("\nenter the price of the book: ");
    scanf("%d",thisBook->price);
    
    return thisBook;
}
int main()
{
system("cls");

// Book Book_1={01,"the haunting house", { "Jackson beckham"},300};

// printf("\n%s",Book_1.author.author_1);
// //Book_1.author.author_2="william light";
// strcpy(Book_1.author.author_2,"william light");
// printf("\n%s",Book_1.author.author_2);
// printf("\nprice: %d",Book_1.price);

Book Book_1;
read_structure(&Book_1);

return 0;
}
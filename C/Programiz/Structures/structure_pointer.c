#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Room{
    int length;
    int breadth;
};

void passing_structure_pointer(struct Room* struct_pointer)
{
    printf("\nenter the length: ");
    scanf("%d",&struct_pointer->length);
    printf("\nenter the breadth: ");
    scanf("%d",&struct_pointer->breadth);
}

void printing_through_structure_pointer(struct Room* struct_pointer)
{
    printf("length: %d \n breadth: %d",struct_pointer->length, struct_pointer->breadth);
}


int main()
{
system("cls");

struct Room Room1;
struct Room* Room_pointer=&Room1;
passing_structure_pointer(Room_pointer);
printing_through_structure_pointer(Room_pointer);

return 0;
}
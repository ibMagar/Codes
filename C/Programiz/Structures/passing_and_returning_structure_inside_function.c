#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct hostel{
    char hostel_name[30];
    int rent;
};

 struct hostel take_and_return_structure( )
{
    struct hostel str;
    printf("\nEnter Hostel Name: ");
    fflush(stdin);
    fgets(str.hostel_name,25,stdin);
    //gets(str.hostel_name);
    printf("\nenter the rent: ");
    scanf("%d",&str.rent);
    return str;
}

void print_structure_info(struct hostel str)
{
    printf("\nHostel Name: ");
    //fputs(str.hostel_name,stdout);
    puts(str.hostel_name);
    printf("\nHostel rent: %d",str.rent);
}
int main()
{
system("cls");
struct hostel Hstl=take_and_return_structure();
print_structure_info(Hstl);

return 0;
}
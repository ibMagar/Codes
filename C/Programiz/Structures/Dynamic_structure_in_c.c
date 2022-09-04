#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Student{
    char name[20];
    int roll;
};

int main()
{
system("cls");

printf("enter the number of students: ");
int n;
scanf("%d",&n);
struct Student* student_ptr = (struct Student*)malloc(n*sizeof(struct Student));
for(int i=0;i<n;i++)
{
    printf("\nStudent %d: ",i+1);
    printf("\nName: ");
    fflush(stdin);
    
    //fgets(student_ptr[i].name,20,stdin);
    gets((student_ptr+i)->name);
    
    printf("\nroll: ");
    scanf("%d",&student_ptr->roll);

}
printf("\n\n");
for(int i=0;i<n;i++)
{
    printf("\n\t\tStudent %d",i+1);
    printf("\nName: %s",student_ptr->name);
    printf("\nroll: %d",student_ptr->roll);
}
return 0;
}
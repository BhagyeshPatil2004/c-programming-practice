#include<stdio.h>
#include<string.h>
struct student
{
    int rollNo;
    char name[20];
    float marks;
    char address[20];
};
void main()
{
    struct student s;
    printf("Enter roll number: ");
    scanf("%d",&s.rollNo);
    printf("Enter Name: ");
    scanf("%s",s.name);
    printf("Enter Marks: ");
    scanf("%f",&s.marks);
    printf("Enter Address: ");
    scanf("%s",&s.address);

    printf("\n%d",s.rollNo);
    printf("\n%s",s.name);
    printf("\n%f",s.marks);
    printf("\n%s",s.address);
    
}
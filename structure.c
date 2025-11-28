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
    s.rollNo=101;
    strcpy(s.name,"Goku");
    s.marks=88;
    strcpy(s.address,"Pune");

    printf("\n%d",s.rollNo);
    printf("\n%s",s.name);
    printf("\n%f",s.marks);
    printf("\n%s",s.address);
    
}

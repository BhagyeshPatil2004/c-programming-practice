#include<stdio.h>

struct Employee
{
char name[18];
int id;
int age;
char city[40];
};
struct Employee emp1, *ptr1;

int main()
{

ptr1 = &emp1;

printf("Enter the name of Employee (emp1):");
scanf("%s",&ptr1->name);

printf("Enter the id of the Employee(emp1):");
scanf("%d",&ptr1->id);
printf("Enter the age of the Employee(emp1):");
scanf("%d",&ptr1->age);
printf("Enter the city of the Employee(emp1):");
scanf("%s",&ptr1->city);

printf("\n Display the Details of the Employee using Structure Pointer");
printf("\n Details of the Employee (emp1)\n");
printf("Name: %s\n",ptr1->name);
printf("ID:%d\n",ptr1->id);
printf("Age:%d\n",ptr1->age);
printf("City:\n",ptr1->city);

return 0;
}
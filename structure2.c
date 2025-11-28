#include<stdio.h>
#include<string.h>
struct Company
{
    char name[21];
    char post[21];
    float salary;
    int ID;

};

void main()
{
 struct Company c;
 
strcpy(c.name,"Naruto");
strcpy(c.post,"Manager");
c.salary=710000.342;
c.ID=564123;

printf("\nName: %s",c.name);
printf("\nPost: %s",c.post);
printf("\nSalary: %f",c.salary);
printf("\nID: %d",c.ID);

printf("\n_________________________________________________________________________________________________");

struct Company c2;

strcpy(c.name,"Sasuke");
strcpy(c.post,"Supervisor");
c.salary=400100.32;
c.ID=797275;

printf("\nName: %s",c.name);
printf("\nPost: %s",c.post);
printf("\nSalary: %f",c.salary);
printf("\nID: %d",c.ID);

printf("\n_________________________________________________________________________________________________");

struct Company c3;

strcpy(c.name,"Sakura");
strcpy(c.post,"Employee");
c.salary=200000.342;
c.ID=444444;

printf("\nName: %s",c.name);
printf("\nPost: %s",c.post);
printf("\nSalary: %f",c.salary);
printf("\nID: %d",c.ID);

printf("\n_________________________________________________________________________________________________");

struct Company c4;

strcpy(c.name,"Hinata");
strcpy(c.post,"Employee");
c.salary=211000.32;
c.ID=797175;

printf("\nName: %s",c.name);
printf("\nPost: %s",c.post);
printf("\nSalary: %f",c.salary);
printf("\nID: %d",c.ID);

printf("\n_________________________________________________________________________________________________");

struct Company c5;

strcpy(c.name,"Ino");
strcpy(c.post,"Employee");
c.salary=111000.342;
c.ID=671254;

printf("\nName: %s",c.name);
printf("\nPost: %s",c.post);
printf("\nSalary: %f",c.salary);
printf("\nID: %d",c.ID);

printf("\n_________________________________________________________________________________________________");

struct Company c6;

strcpy(c.name,"Kakashi");
strcpy(c.post,"Employee");
c.salary=300000.879;
c.ID=101000;

printf("\nName: %s",c.name);
printf("\nPost: %s",c.post);
printf("\nSalary: %f",c.salary);
printf("\nID: %d",c.ID);

}
// Code is Right but the COmplier ans AV not giving supporting..!!!!!!!!!!!!!! 

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
    struct Company c[3]; // Array of 3 Company structures

    for (int i = 0; i < 3; i++) // Loop to input values for each structure
    {
        printf("Enter name: ");
        scanf("%s", c[i].name);

        printf("Enter post: ");
        scanf("%s", c[i].post);

        printf("Enter salary: ");
        scanf("%f", &c[i].salary);

        printf("Enter ID: ");
        scanf("%d", &c[i].ID);

        printf("\n");
    }

    // Loop to display the entered values for each structure
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", c[i].name);
        printf("Post: %s\n", c[i].post);
        printf("Salary: %f\n", c[i].salary);
        printf("ID: %d\n", c[i].ID);
        printf("_____________________________________________________________\n");
    }
    
}

#include <stdio.h>
#include <string.h>

union Neon 
{
    char name[20];
    int rollno;
    float mark;
};

int main()
{
    union Neon n;

    strcpy(n.name, "Uzi");
    printf("\n%s", n.name);

    n.rollno = 13;
    printf("\n%d", n.rollno);

    n.mark = 86.69;
    printf("\n%.2f", n.mark);

    return 0;
}
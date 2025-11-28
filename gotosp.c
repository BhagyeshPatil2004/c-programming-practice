#include<stdio.h>
int main()
{
    int num=3;
    switch(num)
    {
        case 1:
        printf("1");
        break;

        case 2:
        printf("2");
        break;

        case 3:
        printf("3");
        goto jump;
        break;

        default:
        printf("Enter valiad num");
        break;

        jump:printf("\nThis is jump statement");
    }
    return 0;
}
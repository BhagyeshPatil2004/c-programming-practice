#include<stdio.h>
int main()
{
    int day;
    printf("Enter the Number for \n");
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("Sun.");
        break;
        case 2:printf("mon.");
        break;
        case 3:printf("Tue.");
        break;
        case 4:printf("Wed.");
        break;
        case 5:printf("Thu.");
        break;
        case 6:printf("Fri.");
        break;
        case 7:printf("Sat.");
        break;
        default:printf("Invaid number.");
    }
    return 0;
}
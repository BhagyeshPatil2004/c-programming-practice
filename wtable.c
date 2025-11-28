#include<stdio.h>
int main()
{
    int m,i,j;
    i=1;
    printf("Enter the Number\n ");
    scanf("%d",&m);
    while (i<=10)
    {
        j=m*i;
        printf("\n%d",j);
        i++;
    }
    return 0;
}
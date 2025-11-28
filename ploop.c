#include<stdio.h>
int main()
{
    int i,j,sum;
    i=1;
    printf("Enter the number\n");
    scanf("\n%d",&j);
    while(i<=10)
    {
        sum=i*j;
        i++;
        printf("\n%d",sum);
    }
    return 0;
}
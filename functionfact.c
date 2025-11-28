#include<stdio.h>
int fact();
int main()
{
    printf("%d",fact());
    return 0;
}
int fact()
{
    int fact=1,i,n=5;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
#include<stdio.h>
int main()
{
    int fact=1,i=1,n=5;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    return 0;  
}
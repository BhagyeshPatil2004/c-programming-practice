#include<stdio.h>
int main() // factorial in for loop
{
    int i,n=5,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
       
    }
    printf("\n%d",fact);
    return 0;
}
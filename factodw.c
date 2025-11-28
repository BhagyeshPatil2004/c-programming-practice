#include<stdio.h>
int main()
{
    int fact=1,i=1,n=5;
    do
    {
        fact=fact*i;
        i++;
    } while (i<=n);
     printf("%d\n",fact);
    return 0;
}
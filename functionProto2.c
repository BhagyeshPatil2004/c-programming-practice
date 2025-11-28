#include<stdio.h>
void fact()
{
    int fact=1,i;
    for(i=1;i<=5;i++)
    {
        fact=fact*i;
        
    }
    printf("%d",fact);
}
void main()
{
    fact();
}

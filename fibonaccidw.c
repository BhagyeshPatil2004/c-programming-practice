#include<stdio.h>
int main() // fibonacci series...
{
    int a=0,b=1,c,i=1;
    do
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    } while (i<=10);
    return 0;
}
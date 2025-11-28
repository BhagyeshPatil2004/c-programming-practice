#include<stdio.h>
int main() //fibonacci series in for loop
{
    int a=0,b=1,c,i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
#include<stdio.h>
int main() //Addition of Two 2+2=4,4+4=8........ 
{
    int i=1,a=2,b=2,c;
    while(i<=10)
    {
        printf("\n%d",a);
        c=a+b;
        a=c;
        b=c; 
        i++;
    }
    return 0;
}
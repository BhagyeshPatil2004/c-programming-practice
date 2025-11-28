#include<stdio.h>
int fact(int);
int main()
{
    int n=5,f;
    f=fact(n);
    printf("Factorial is : %d",f);
    return 0;
}
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
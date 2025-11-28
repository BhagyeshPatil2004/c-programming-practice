#include<stdio.h>
void facto();
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    facto(n);
}

 void facto(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("%d\n",fact);
} 
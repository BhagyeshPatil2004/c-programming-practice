#include<stdio.h>
void add(int,int);
void main()
{
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the number : ");
    scanf("%d",&b);

    add(a,b);   //actual argument
}
void add(int a,int b)   //formal argument
{
    int sum;
    sum = a+b;
    printf("%d",sum);
}
#include<stdio.h>
void add();
void mul();
void main()
{
    int a,b;
    printf("Enter the number for var1 : ");
    scanf("%d",&a);
    printf("Enter the number for var2 : ");
    scanf("%d",&b);

    add(a,b);
}
void add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d\n",sum);

    mul(a,b);
}
void mul(int a, int b)
{
    int res;
    res= a * b;
    printf("%d\n",res);
}

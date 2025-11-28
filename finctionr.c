#include<stdio.h>
int add();
int sub();
int mul();
int div();
int mod();
int main()
{
    printf("\n%d",add());
    printf("\n%d",sub());
    printf("\n%d",mul());
    printf("\n%d",div());
    printf("\n%d",mod());
    return 0;
}
int add()
{
    int a=30,b=40,total;
    total= a+b;
    return total;
}
int sub()
{
    int a=30,b=40,total;
    total = a-b;
    return total;
}
int mul()
{
    int a=30,b=40,total;
    total = a*b;
    return total;
}
int div()
{
    int a=30,b=40,total;
    total = a/b;
    return total;
}
int mod()
{
    int a=30,b=40,total;
    total = a%b;
    return total;
}
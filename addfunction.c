#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
void main()
{
    
    add();
    sub();
    mul();
    div();
    mod();
}
void add()
{
    int a=10,b=20,res;
    res = a+b;
    printf("%d\n",res);
}
void sub()
{
    int a=10,b=20,res;
    res = a-b;
    printf("%d\n",res);
}
void mul()
{
    int a=10,b=20,res;
    res = a*b;
    printf("%d\n",res);
}
void div()
{
    int a=10,b=20,res;
    res = a/b;
    printf("%d\n",res);
}
void mod()
{
    int a=10,b=20,res;
    res = a%b;
    printf("%d\n",res);
}
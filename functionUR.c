#include<stdio.h>
int add();
int main()
{
    printf("%d",add());
    return 0;
}
int add()
{
    int a,b,res;
    printf("Enter the num1 : ");
    scanf("%d",&a);

    printf("Enter the num2 : ");
    scanf("%d",&b);
    
    res=a+b;
    return res;
}
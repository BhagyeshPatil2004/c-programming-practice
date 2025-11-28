#include<stdio.h>
void add(int a,int b);
void main()
{
    
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the number : ");
    scanf("%d",&b);
    add(a,b);  // parameter

}
void add(int a, int b)  // parameter
{
    int total;
    total = a+b;
    printf("%d",total);
}
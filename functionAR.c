#include<stdio.h>
int add(int , int );
int main()
{
    int a,b;
    printf("Enter the number for varA : ");
    scanf("%d",&a);
    printf("Enter the number for varB : ");
    scanf("%d",&b);

   printf("%d",add(a,b));

}
int add(int a, int b)
{
    int sum;
    sum=a+b;
    //printf("%d",add(a,b));
    return sum;
}
#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter the num1 : ");
    scanf("%d",&a);

    printf("Enter the num2 : ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("\nafter swapping %d %d ",a,b);
}
void swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("\n%d",*x);
    printf("\n%d",*y);
}
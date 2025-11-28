#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    printf("\nGrabage value : %d",p);
    printf("\nValue of pointer value : %d",*p);
    printf("\nPointer to P  is : %x",p);
    printf("\nPointer to interger : %p",p);
    printf("\nAdders of a: %p",p);
    printf("\nAdders of poixnter : %x",&p);
}
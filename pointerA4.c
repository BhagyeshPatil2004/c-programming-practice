#include<stdio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("\n%x",ptr);
    ptr=ptr+2;
    printf("\n %x",ptr);

    
}
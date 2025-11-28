#include<stdio.h>
void main()
{
    int l,b,area,perimeter;
    printf("Enter length of rectangle : ");
    scanf("%d",&l);
    printf("\nEnter breadth of rectangle : ");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);

    printf("\nArea of the rectangle is %d\n",area);
    printf("\nPerimeter of rectangle is%d\n",perimeter);

}
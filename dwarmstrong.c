#include<stdio.h>
int main() // armstrong in do while ...
{
    int num,r,cube,sum=0,temp;
    printf("Enter the number : ");
    scanf("\n%d",&num);
    printf("\nnum is before : %d",num);
    temp=num;
    do
    {
        r=num%10;
        cube=r*r*r;
        sum=sum+cube;
        num=num/10;

    } 
    while (num>0);
    printf("\nsum is %d",sum);
    printf("\nnum is after calc: %d",num);
       if(temp==sum)
    {
        printf("\nNumber is armstrong");
    }
    else
    {
        printf("\nNumber is not armstrong");
    }
    return 0;
}
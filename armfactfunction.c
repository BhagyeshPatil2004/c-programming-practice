#include<stdio.h>
void armstrong();
void factorial();
void fibonacci();
void main()
{
    armstrong();
    factorial();
    fibonacci();
}
void armstrong()
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
        printf("\nNumber is not armstrong\n");
    }
}
void factorial()
{
    int fact=1,i,n=5;
     for(i=1;i<=n;i++)
    {
        fact=fact*i;  
    }
    printf("\n%d",fact);
}
void fibonacci()
{
    int i,a=1,b=1,c;
     for(i=1;i<=10;i++)
    {
        printf("\n%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}
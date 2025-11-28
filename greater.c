#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("\nEnter first number : ");
    scanf("\n%d",&num1);
    printf("\nEnter second number : ");
    scanf("\n%d",&num2);
    printf("\nEnter second number : ");
    scanf("\n%d",&num3);

    if(num1>num2 && num1>num3)
    {
        printf("Number first is greater..");

    }

    else if(num2>num1 && num2>num3)
    {
        printf("Number second is greater..");

    }

    else
    {
        printf("Number third is greater..");

    }

    return 0;
}




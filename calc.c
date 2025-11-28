#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the number 2 for add,sub,mul,div.\n");
    
    scanf("%d",&a);
    scanf("%d",&b);
    printf("For add 1,sub 2,mul 3,div 4\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            c=a+b;
            printf("%d",c);
            break;

        case 2:
            c=a-b;
            printf("%d",c);
            break;

        case 3:
            c=a*b;
            printf("%d",c);
            break;

        case 4:
            c=a/b;
            printf("%d",c);
            break;

        default:printf("Invaild number");

    }
    return 0;
}
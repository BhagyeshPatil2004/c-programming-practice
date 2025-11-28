#include<stdio.h>
int main() // mul. table ....
{
    int a,i=1,mul;
    printf("Enter the number : ");
    scanf("\n%d",&a);
    do
    {
        mul=a*i;
        printf("%d\n",mul);
        i++;
    } while (i<=10);
    return 0;
}
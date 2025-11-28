#include<stdio.h>
int main()//All devide no.
{
    int i,n;
    i=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            printf("\n%d",i);
        }
        i++;
    } 
    while (i<=10);
    return 0;
}
#include<stdio.h>
int main()//All devide no.
{
    int i,n;
    i=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("\n%d",i);
        }
        i++;
    }
    return 0;
}
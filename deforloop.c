#include<stdio.h>
int main()   // The no. having same no. in diff. table eg. 2*5=10,5*2=10... 
{
    int i,d;
    printf("Enter the number : ");
    scanf("%d",&d);
    for(i=1;i<=10;i++)
    {
        if(d%i==0)
        {
        printf("\n%d",i);
        }
    }
    return 0;
}
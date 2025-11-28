#include<stdio.h>
int main()  // The no. having same no. in diff. table eg. 2*5=10,5*2=10... 
{
    int i,d;
    i=1;
    printf("Enter the number : ");
    scanf("%d",&d);
    while(i<=d)
    {
        if(d%i==0)
        {
        printf("\n %d",i);
        }
        i++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n=7,i=1,count=0;
    while(i<=n)
    {
        if(n%i==0)
        {
            count = count + 1;
        }
        i++;
    }
        if(count==2)
        {
            printf("\nThe number is Prime");
        }
        else
        {
            printf("\nThe number is not Prime");
        }
    return 0;
}
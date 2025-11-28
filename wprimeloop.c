#include<stdio.h>
int main()
{
    int n=20,i,j,count;
    for(i=1;i<=n;i++)
    {
        count=0;
         for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                 count=count+1;
            }
        }
        if(count==2)
        {
            printf("\n%d",i);
        }  
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,res;
    for(i=1;i<=10;i++)
    {
        printf("\n");
        for(j=1;j<=10;j++)
        {
            res=i*j;
            printf("\n%d",res);
        }
    }
    return 0;
}
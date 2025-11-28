#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        printf("\n");

        for(j=1;j<=5;j++)
        {
            printf("\n %d %d ",i,j);
        }
    }
    return 0;
}
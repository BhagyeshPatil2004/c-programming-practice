#include<stdio.h>
int main()
{
    int max1[3][3]={{1,3,5},{5,7,9},{9,5,1}};
    int max2[3][3]={{2,4,6},{6,8,0},{1,2,3}};

    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d ",max1[i][j]);
        }
    }
        printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d ",max2[i][j]);
        }
    }
    return 0;
}
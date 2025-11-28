#include<stdio.h>
void main()
{
    int arr[2][3][3]={{{1,2,3},{1,2,3},{1,2,3}},{{5,6,7},{5,6,7},{5,6,7}}};
    int i,j,k;

    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
        printf("\n");
            for(k=0;k<3;k++)
            {
                printf("%d",arr[i][j][k]);
            }
        }
    }
}
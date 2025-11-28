#include<stdio.h>
void main()
{
    int arr[2][3][3];
    int i,j,k;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n");

            for(k=0;k<3;k++)
            {
                printf("Enter the value %d  %d %d : ",i,j,k);
                scanf("%d",&arr[i][j][k]);
            } 
        }
    }

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
#include<stdio.h>
int main()
{
    int arr[3][3]={{1,6,3},{1,8,3},{1,4,5}};

    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}
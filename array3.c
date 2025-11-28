#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the value %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
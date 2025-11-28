#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int i;

    printf("\nEven Number :");
    for(i=0;i<8;i++)
    {
        if(arr[i]%2==0)
        {
            printf(" %d",arr[i]);
        }
    }

    printf("\nOdd numbers : ");

    for(i=0;i<8;i++)
    {
          if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
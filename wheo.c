#include<stdio.h>
int main()
{
    int i,j;

    printf("Enter the number for the limit\n");
    scanf("%d",&j);

    printf("Enter the number for Odd number\n");
    scanf("%d",&i);
    
    while(i<=j) 
    {
        if(i%2!=0)
        {
            printf("\n%d",i);
        }
        i++;
    }
    return 0;
}
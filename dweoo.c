#include<stdio.h>
int main()  // Even odd number printing program...
{
    int i,j;

    printf("Enter the number for the limit\n");
    scanf("%d",&j);

    printf("Enter the number for Even number\n");
    scanf("%d",&i);
    do
    {
       if(i%2==0)
       {
        printf("%d\n",i);
       } 
       i++;
    } while (i<=j);
    return 0;
}
    
#include<stdio.h>
int main()  // 1D array
{
    int i,sum = 0;
    int add[5]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        //printf("\n%d",add[i]);
        sum = sum + add[i]; 
    }
    printf("\naddition = %d",sum);
    
    return 0;
}
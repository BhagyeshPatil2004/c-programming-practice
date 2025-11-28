#include<stdio.h>
int main()
{
    int i,j=0;
    i=1;   //initilization
    while(i<=10)       //condition
    {
        j=j+i;
        i++;    // increment
    }
    printf("%d",j);
    return 0;
}
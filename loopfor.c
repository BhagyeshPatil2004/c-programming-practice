#include<stdio.h>
int main() // mult. table..
{
    int i,j,mul;
    printf("Enter the number : ");
    scanf("\n%d",&j);

    for(i=1;i<=10;i++)
    {
       mul=i*j;
       printf("\n%d",mul);
    }
   
    return 0;
}
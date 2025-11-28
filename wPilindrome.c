#include<stdio.h>
void main()
{
    int n,r,temp,rev=0;
   
    printf("Enter the Number : ");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("Number is pilindrome\n");
    }
    
    else
        {
            printf("Number is not pilindrome\n");
        }
}
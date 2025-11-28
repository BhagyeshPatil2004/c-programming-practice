#include<stdio.h>
void prime();
void main()
{
   int n;
   printf("Enter the number : ");
   scanf("%d",&n);

   prime(n);
}
void prime(int n)
{
   int i=1,count=0;
    while(i<=n)
    {
        if(n%i==0)
        {
            count = count + 1;
        }
        i++;
    }
        if(count==2)
        {
            printf("\nThe number is Prime");
        }
        else
        {
            printf("\nThe number is not Prime");
        }  
}
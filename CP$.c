#include<stdio.h>
void main()
{
    int a,c,n;

    printf("!!Choose the Option!!");
    printf("1 Coffee List ");
    printf("2 Admin Panel");
    printf("3 Exit");
    printf("Enter the Option: ");
    scanf("%d",&a);

    if(a==1)
    {
        Coffee();   
    }
    else if (a==2)
    {
        Admin();
    }
    else
    {
        
    }
    
   
}
void Coffee()
{
    int cc,nc;

    printf(" ");
    printf("Choose the Coffee ");
    scanf("%d",&cc);
    printf("Number of Coffee");
    scanf("%d",&nc);

}
void Admin()
{
    printf(" ");
}

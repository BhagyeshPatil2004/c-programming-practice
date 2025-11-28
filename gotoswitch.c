#include<stdio.h>
int main()
{
    int num;
   printf("Enter case : ");
   scanf("%d",&num);

    switch(num)
    {
        case 1:printf("\n Hello");
            break;

        case 2:printf("\n Hii");
            break;
            
        case 3:printf("\n Bye");
            goto jump;
        default:printf("Please enter the vaild number");
            break;
        jump:printf("\n See you in sky");// jump is lable(we can use diff. name )..
    }
    return 0;        
}
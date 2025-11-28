#include<stdio.h>
int main()
{
    int n1,n2,res,op;
    printf("Enter the number for n1 : \n");
    scanf("%d",&n1);

    printf("Enter the number for n2 :\n ");
    scanf("%d",&n2);

    printf("Enter case : ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
       res = n1 + n2;
       printf("Addition : %d",res);
        break;
    
     case 2:
        res = n1 - n2;
        printf("Subtraction : %d",res);
        break;

    default:
         printf("Invaild number");
          break;
    }
    
    return 0;
}
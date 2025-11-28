#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number for the given number is even or odd\n");
    scanf("%d",&a);
    if(a%2==0){
    printf("The number is Even");
    }
    else{
    printf("The number is Odd");
    }
    return 0;
}
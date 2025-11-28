#include<stdio.h>
void main()
{
    float C,F;
    printf("Enter the Celsius to convert it in Fahrenheit: ");
    scanf("%f",&F);

    C = (F - 32) * 5/9;
    printf("%.2f",C);

}
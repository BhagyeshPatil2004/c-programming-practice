// Write a program to enter marks of five subjects of a student and calculate total, 
// average and percentage of all subjects.

#include<stdio.h>
void main()
{
    int S1,S2,S3,S4,S5,percentage,total;

    printf("\nEnter the marks Out of 100");
    printf("\nEnter the marks of Science: ");
    scanf("%d",&S1);
    printf("\nEnter the marks of Maths: ");
    scanf("%d",&S2);
    printf("\nEnter the marks of English: ");
    scanf("%d",&S3);
    printf("\nEnter the marks of Hindi: ");
    scanf("%d",&S4);
    printf("\nEnter the marks of Computer: ");
    scanf("%d",&S5);

    total = S1 + S2 + S3 + S4 + S5;
    printf("\nThe Total Marks are %d",total);
    percentage = (total*100)/500;
    printf("\nThe Percentage is %d",percentage);

}

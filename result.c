#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,t,total=500;
    float per;
    printf("\nEnter your marks of English : ");
    scanf("%d",&s1);
    printf("\nEnter your marks of Hindi : ");
    scanf("%d",&s2);
    printf("\nEnter your marks of marathi : ");
    scanf("%d",&s3);
    printf("\nEnter your marks of Maths : ");
    scanf("%d",&s4);
    printf("\nEnter your marks of Science : ");
    scanf("%d",&s5);

    t=s1+s2+s3+s4+s5;
    printf("\nTotal marks = %d",t);

    per = (float)t/total*100;
    printf("\nPercentage = %.2f",per); 

    if(per>=80 || per<=100)
    {

        printf("\nGrade A");
    }  

    else if(per>=55 || per<80)
    {

        printf("\nGrade B");
    }  

    else if(per>=35 || per<55)
    {

        printf("\nGrade C");
    }  

    else
    {
        printf("\nFAIL");
    }

    return 0;


}
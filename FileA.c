#include<stdio.h>
void main()
{
    char ch[20];
    FILE *fp;
    fp = fopen("C:\\FpC\\file_handling.txt","a");
    if (fp==NULL)
    {
        printf("File is not created");
    }
    printf("\n File is created");
    printf("\nEnter name: ");
    scanf("%s",ch);
    fprintf(fp,"%s",ch);
    printf("\n Name added successully");
    fclose(fp);
}
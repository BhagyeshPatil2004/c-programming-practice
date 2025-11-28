#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("C:\\FpC\\file_handling.txt","r");

    while (1)
    {
        ch = fgetc(fp);
        if (ch==EOF)
        break;
        printf("%c",ch);

    }
    fclose(fp);
}
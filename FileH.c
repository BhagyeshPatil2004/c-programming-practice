#include<stdio.h>
void main()

{
    FILE *fp;
    char ch[20];
    fp = fopen("C:\\FpC\\file_handling.txt","w"); // write the file name are in the file manager in PC/Laptop..!!  "file name\\ folder name\\.."
    if (fp==NULL)
    {
        printf("\n !!File is not created !! ");
    
    }
    printf("File is created");
    printf("\nEnter your name: ");
    scanf("%s",ch);
    fprintf(fp,"%s",ch);
    printf("\nSuccessfully Entered Data ");

    fclose(fp);
}
#include<stdio.h>
#include<string.h>
void main()
{
    char name[20]="hello";
    char name2[20]=" Welcome";
    char nm[20];
    int len;
    printf("\nName: %s",name);

    //copy
    strcpy(nm,name);
    printf("\ncopy : %s",nm);

    //concatenation
    strcat(name,name2);
    printf("\nConcatenation: %s",name);

    //length
    len = strlen(name);
    printf("\nlength: %d",len);

}
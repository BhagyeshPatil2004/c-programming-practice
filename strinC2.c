#include<stdio.h>
#include<string.h>
void main()
{
    char N[21]=" Messi";
    char N2[21]=" Mclaren";
    char N3[21];
    int len;
    
    strcpy(N3,N);
    printf("\nCopy: %s",N3);

    strcat(N2,N);
    printf("\nConcatenation: %s",N2);

    len = strlen(N2);
    printf("\nLength: %d",len);
    

}
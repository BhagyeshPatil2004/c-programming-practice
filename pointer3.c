#include<stdio.h>
void main()
{
    int *ptr=NULL;
    ptr=(int*)malloc(4*sizeof(int));
    if(ptr==NULL)
    {
        printf("\n Memory is not allocate ");
    }
    else
    {
        printf("\n Memory is allocate ");
    }
}
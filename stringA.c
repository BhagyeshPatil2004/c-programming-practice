#include<stdio.h>
void main()
{
    char name[5][10]={"Luffy","Zoro","Sanji","Luffy","Robin"};
    int i;
    for(i=0;i<5;i++)
    {
        if(name[i]=="Luffy")
        {
            printf("%s ",name[i]);
        }
        else
        {
            continue;
        }
    }
}
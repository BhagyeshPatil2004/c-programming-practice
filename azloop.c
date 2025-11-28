#include<stdio.h>
int main() 
{
    char c;
    c='A';
    while ( c <= 'Z')
    { 
        if(c=='N')
        {
            continue;
        }
        printf("%c ", c);
        c++;
    }
    return 0;
}
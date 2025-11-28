#include<stdio.h>
int main()
{
    char a;
    printf("Enter the vowel char.:\n");
    scanf("%c",&a);
    switch(a)
    {
        case 'a' :printf("a");
        break;

        case 'e' :printf("e");
        break;

        case 'i' :printf("i");
        break;

        case 'o' :printf("o");
        break;

        case 'u' :printf("u");
        break;

        default: printf("Invaild char.");
    }
    return 0;
}
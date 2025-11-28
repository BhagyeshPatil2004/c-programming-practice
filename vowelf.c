#include<stdio.h>
void vowel()
{
    char a;
    printf("Enter the vowel char.:\n");
    scanf("%c",&a);
    switch(a)
    {
        case 'a' :printf("It is an vowel.");
        break;

        case 'e' :printf("It is an vowel.");
        break;

        case 'i' :printf("It is an vowel.");
        break;

        case 'o' :printf("It is an vowel.");
        break;

        case 'u' :printf("It is an vowel.");
        break;

        default: printf("It is not Vowel");
    }
   
}
void main()
{
    vowel();
}

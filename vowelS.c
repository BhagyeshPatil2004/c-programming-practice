#include <stdio.h>

int isVowel(char ch)
 {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' );
}

int countVowels(char str[]) 
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            count++;
        }
    }
    return count;
}

int main() 
{
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    
    gets(inputString);

    int vowelsCount = countVowels(inputString);
    printf("Number of vowels in the string: %d\n", vowelsCount);
}
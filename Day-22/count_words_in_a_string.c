#include <stdio.h>

int main() 
{
    char s[100];
    int i, words = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for(i = 0; s[i] != '\0'; i++) 
    {
        if(s[i] == ' ')
        {
            words++;
        }
    }

    printf("Number of words = %d", words);

    return 0;
}
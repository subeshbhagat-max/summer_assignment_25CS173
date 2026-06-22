#include <stdio.h>

int main()
{
    char s[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != ' ')
        {
            s[j] = s[i];
            j++;
        }
    }

    s[j] = '\0';

    printf("String after removing spaces:\n %s", s);

    return 0;
}
#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i, j, k, found;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("Common characters: ");

    for(i = 0; s1[i] != '\0'; i++)
    {
        found = 0;

        for(k = 0; k < i; k++)
        {
            if(s1[i] == s1[k])
            {
                found = 1;
                break;
            }
        }

        if(found)
            continue;

        for(j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j])
            {
                printf("%c ", s1[i]);
                break;
            }
        }
    }

    return 0;
}
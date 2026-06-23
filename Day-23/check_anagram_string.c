#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int f1[256] = {0}, f2[256] = {0};
    int i, result = 1;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2))
    {
        printf("Not Anagrams");
        return 0;
    }

    for(i = 0; s1[i] != '\0'; i++)
    {
        f1[s1[i]]++;
        f2[s2[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(f1[i] != f2[i])
        {
            result = 0;
            break;
        }
    }

    if(result)
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}
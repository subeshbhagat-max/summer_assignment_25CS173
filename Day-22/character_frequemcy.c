#include <stdio.h>

int main() {
    char s[100];
    int f[256] = {0},i;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for(i = 0;s[i] != '\0'; i++)
    {
        f[(unsigned char)s[i]]++;
    }

    printf("\nCharacter Frequencies:\n");
    for(i = 0; i < 256; i++)
    {
        if(f[i] != 0) 
        {
            printf("%c = %d\n", i, f[i]);
        }
    }

    return 0;
}
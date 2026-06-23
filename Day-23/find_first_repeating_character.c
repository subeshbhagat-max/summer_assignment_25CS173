#include <stdio.h>

int main() {
    char s[100];
    int f[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for(i = 0; s[i] != '\0'; i++) {
        f[(unsigned char)s[i]]++;

        if(f[(unsigned char)s[i]] == 2) {
            printf("First repeating character: %c\n", s[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");

    return 0;
}
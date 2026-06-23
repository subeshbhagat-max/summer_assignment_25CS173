#include <stdio.h>

int main() {
    char s[100];
    int f[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for(i = 0; s[i] != '\0'; i++) {
        f[(unsigned char)s[i]]++;
    }

    for(i = 0; s[i] != '\0'; i++) {
        if(f[(unsigned char)s[i]] > max) {
            max = f[(unsigned char)s[i]];
            maxChar = s[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}
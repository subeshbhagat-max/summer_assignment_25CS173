#include <stdio.h>

int main() {
    char s[100];
    int f[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for(i = 0; s[i] != '\0'; i++) {
        f[(unsigned char)s[i]]++;
    }

        for(i = 0; s[i] != '\0'; i++) {
        if(f[(unsigned char)s[i]] == 1) {
            printf("First non-repeating character: %c\n", s[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}
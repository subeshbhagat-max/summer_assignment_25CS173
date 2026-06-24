#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int currLen = 0, maxLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d", maxLen);

    return 0;
}
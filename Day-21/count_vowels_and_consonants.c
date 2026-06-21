#include <stdio.h>

int main() {
    int n, i, vowels = 0, consonants = 0;

    printf("Enter string length: ");
    scanf("%d", &n);

    char str[n + 1];

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        else if(ch >= 'a' && ch <= 'z')
            consonants++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len,result = 1;

    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for(i = 0; i < len / 2; i++) {
        if(s[i] != s[len - 1 - i]) {
            result = 0;
            break;
        }
    }

    if(result)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}
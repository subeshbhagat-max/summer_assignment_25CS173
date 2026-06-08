#include<stdio.h>
int main() {
    int n, i = 0, b[50];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        b[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary of the number %d: ",n);
    for (i = i - 1; i >= 0; i--) {
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}
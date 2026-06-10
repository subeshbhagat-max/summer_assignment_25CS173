// Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of rows:");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%c", 'A' + k - 1);
        }
        for (int l = i - 1; l >= 1; l--) {
            printf("%c", 'A' + l - 1);
        }
        printf("\n");
    }
    return 0;
}
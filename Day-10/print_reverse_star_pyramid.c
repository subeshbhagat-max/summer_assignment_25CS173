// Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of rows:");
    scanf("%d", &a);
    for (int i = a; i >= 1; i--) {
        for (int j = 1; j <= a - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
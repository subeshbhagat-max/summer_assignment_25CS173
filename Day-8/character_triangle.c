//Write a program to Print character triangle.
//A
//AB
//ABC
//ABCD
//ABCDE

#include <stdio.h>

int main() {
    int n ;
    char ch = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" %c ", ch + j - 1);
        }
        printf("\n");
    }

    return 0;
}
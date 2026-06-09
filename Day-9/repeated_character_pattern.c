// Write a program to Print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE

#include <stdio.h>
int main(){
    int i, j, a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (i = 1; i <= a; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%c", i + 64);
        }
        printf("\n");
    }
}
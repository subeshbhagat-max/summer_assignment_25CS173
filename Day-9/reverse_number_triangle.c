// Write a program to Print reverse number triangle.
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>
int main(){
    int i, j, a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (i = a; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
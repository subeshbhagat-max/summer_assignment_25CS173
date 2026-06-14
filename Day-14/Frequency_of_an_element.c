#include <stdio.h>
int main ()
{
    int n, i, e,a[100] ,count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
     {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &e);
    for (i = 0; i < n; i++) {
        if (a[i] == e) {
            count++;
        }
    }
    printf("Frequency of %d is %d", e, count);
    return 0;
}
#include<stdio.h>
int main ()
{
    int n, i, a[100], largest, second_largest;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    largest=a[0];
    second_largest=a[0];
    for (i=1; i<n; i++)
    {
        if (a[i]>largest)
        {
            second_largest=largest;
            largest=a[i];
        }
        else if (a[i]>second_largest)
        {
            second_largest=a[i];
        }
    }
    printf("The second largest element is %d\n", second_largest);
    return 0;
}
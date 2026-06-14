#include <stdio.h>
int main ()
{
    int n, i, e, a[100],s, target=0;
    printf("Enter the size of the array:");
    scanf ("%d", &n);
    printf ("Enter the elements of the array :\n");
    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search :");
    scanf("%d", &s);
    for (i=0; i<n; i++)
    {
        if (a[i]==s)
        {
            target=1;
            break;
        }
    }
     if (target==1)
     {
        printf("Element found at position %d",i);
     }
     else
     {
        printf("Element not found in the array");
     }
     return 0;
}
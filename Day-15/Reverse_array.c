#include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array;");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Reverse of the array :");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    {
        for(i=0; i<n; i++)
        {
            printf("a[%d]=",i);
            scanf("%d",&a[i]);
        }
    }
    printf("The elements of the array are: ");
    for(i=0; i<n ; i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
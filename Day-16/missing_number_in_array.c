#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for (i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=n*(n+1)/2;
    int total=0;
    for(i=0;i<n-1;i++)
    {
        total+=a[i];
    }
    printf("missing element is %d ",sum-total);
    return 0;
}
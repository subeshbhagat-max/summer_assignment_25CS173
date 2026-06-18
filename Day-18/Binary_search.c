#include<stdio.h>
int main()
{
    int n,i,target,a[100];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the target element :");
    scanf("%d",&target);
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==target)
        {
            printf("Element found at position %d",mid);
            return 0;
        }
        else if(target<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    printf("Element not found ");
    return 0;
}
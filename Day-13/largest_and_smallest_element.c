#include<stdio.h>
int main()
{
    int a[100],n,i,largest,smallest;
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
    largest = smallest = a[0];
    for(i=1; i<n ; i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("The largest element in the array is: %d\n",largest);
    printf("The smallest element in the array is: %d\n",smallest);
    return 0;
}   
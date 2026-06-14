#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("The duplicate elements in the array are: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf(" %d ",a[i]);
                break;
            }
        }
    }
    return 0;
}
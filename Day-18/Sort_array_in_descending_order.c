#include <stdio.h>
int main ()
{
    int n,i,j,a[100],temp;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements of the array :\n");
    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array in descending order :");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
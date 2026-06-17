#include <stdio.h>
int main()
{
    int n,m,i,a[100],b[100],c[n+m];
    printf("Enter the size of the first array :");
    scanf("%d",&n);
    printf("Enter the elements of the first array :\n");
    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the second array :");
    scanf("%d",&m);
    printf("Enter the elements of the second array:\n");
    for(i=0;i<m;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
           c[i]=a[i];
           for(i=0;i<m;i++)
           {
            c[n+i]=b[i];
           }
    }
    printf("Merged array :");
    for(i=0;i<n+m;i++)
    {
        printf(" %d ",c[i]);
    }
    return 0;
}
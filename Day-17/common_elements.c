#include <stdio.h>
int main()
{
    int n,m,i,j,a[100],b[100];
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
    for(j=0;j<m;j++)
    {
        printf("b[%d]=",j);
        scanf("%d",&b[j]);
    }
    printf("Common elements :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                printf(" %d ",a[i]);
                break;
            }
        }
    }
    return 0;
}
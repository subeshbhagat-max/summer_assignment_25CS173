#include <stdio.h>
int main ()
{
    int n, k, i, j, a[100];
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
    printf("a[%d]=", i);
    scanf("%d" , &a[i]);
    }
    printf("Enter the  number of rotation:");
    scanf("%d",&k);
    k%=n;
    for(i=0; i<k;i++)
    { 
        int temp=a[n-1];
        for(j=n-1; j>0; j--)
    {
        a[j]= a[j-1];
    }
    a[0]=temp;
}
    printf("array after rotation :\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
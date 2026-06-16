#include <stdio.h>
int main()
{
    int n,i,j,a[100], sum;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the sum :");
    scanf("%d",&sum);
    int result=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if ( a[i]+a[j]==sum)
            {
                printf("pair is %d and %d\n",a[i],a[j]);
                   result=1;
            }
        }
    }
    if(result==0) 
    printf("pair not found");
    
    return 0;
}
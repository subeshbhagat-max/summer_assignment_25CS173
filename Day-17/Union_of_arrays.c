#include <stdio.h>
int main ()
{
    int n,m,i,j,k=0,result,u[200],a[100],b[100];
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
    printf("Enter the elements of the second array :\n");
    for (i=0;i<m;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for (i=0;i<n;i++)
    {
        u[k++]=a[i];
    }
    for(i=0;i<m;i++)
    {
        result=0;
        for(j=0;j<k;j++)
        {
            if(b[i]==u[j])
            {
                result=1;
                break;
            }
        }
        if(!result)
        {
            u[k++]=b[i];
        }
    }
    printf("Union of arrays :");
    for(i=0;i<k;i++)
    {
        printf("%d ",u[i]);
    }
    return 0;
}
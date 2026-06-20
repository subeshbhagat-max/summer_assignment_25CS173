#include<stdio.h>
int main ()
{
    int n,i,j,a[100][100],result=1;
    printf("Enter the order of the matrix :");
    scanf("%d",&n);
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                result=0;
                break;
            }
        }
    }
    if(result)
    {
        printf("matrix is symmetric");
    }
    else
    {
        printf("Matix is not symmetric");
    }
    return 0;

}
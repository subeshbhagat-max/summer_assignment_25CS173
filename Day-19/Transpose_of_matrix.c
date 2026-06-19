#include<stdio.h>
int main ()
{
    int c,r,i,j,a[100][100],t[100][100];
    printf("Enter the row and column :\n");
    scanf("%d%d",&c,&r);
    printf("Enter the elements of the matrix :");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("transpose of matrix :\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf(" %d ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
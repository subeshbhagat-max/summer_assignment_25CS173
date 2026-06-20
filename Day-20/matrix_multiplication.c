#include <stdio.h>
int main ()
{
    int c1,r1,c2,r2,i,j,k,a[100][100],b[100][100],r[100][100];
    printf("Enter the row and colun of first matrix :\n");
    scanf ("%d%d",&c1,&r1);
    printf("Enter the elements of the first matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the row and colun of second matrix :\n");
    scanf ("%d%d",&c2,&r2);
    printf("Enter the elements of the first matrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if (c1!=r2)
    {
        printf("matrix multiplication not possible ");
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                r[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    r[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Resultant matrix :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf(" %d ",r[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
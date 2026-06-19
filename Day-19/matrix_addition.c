#include<stdio.h>
int main ()
{
    int c1,r1,c2,r2,i,j,a[100][100],b[100][100],s[100][100];
    printf("Enter the row and column of matrix a :\n");
    scanf("%d\n%d",&c1,&r1);
    printf("Enter the elements of the matrix a: \n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf ("Enter the row and column of matrix b:\n");
    scanf("%d\n%d",&c2,&r2);
    printf("Enter the elements of the matrix b:\n");
    for(i=0;i<c2;i++)
    {
        for(j=0;j<r2;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if(c1!=c2||r1!=r2)
    {
        printf("Matrix addition not possible");
    }
    else
    {
        for(i=0;i<c1;i++)
        {
            for(j=0;j<r1;j++)
            {
                s[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    printf("Sum of two matrix is : \n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf(" %d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;

}
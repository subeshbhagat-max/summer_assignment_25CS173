#include <stdio.h>
int main ()
{
    int i,j,c,r,a[100][100],diagonal_sum=0;
    printf("Enter the row and column of matrix :");
    scanf("%d %d",&r,&c);
    printf("enter the elements of the matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    if (c!=r)
    { 
        printf("matrix is not a square matrix");
    }
    else
    {
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                diagonal_sum+=a[i][j];
            }
        }
    }
    }
     printf("sum of diagonal elements = %d",diagonal_sum);
    return 0;

}
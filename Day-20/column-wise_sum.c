#include <stdio.h>
int main ()
{
    int c,r,i,j,a[100][100];
    printf("Enter the row and column of the matrix :\n");
    scanf("%d%d",&c,&r);
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Columns wise sum :\n");
    for(j=0;j<c;j++)
    {
        int sum=0;
        for(i=0;i<r;i++)
        {
            sum+=a[i][j];
        }
        printf("Sum of column %d = %d\n",j+1,sum);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for (i=0;i<n;i++)
    {
        if (i<=1)
            c=i;
        else
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }
    return 0;
}

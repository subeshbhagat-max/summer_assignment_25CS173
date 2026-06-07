#include <stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("Enter the term number in the Fibonacci series: ");
    scanf("%d",&n);
    if (n==1)
        c=a;
    else if (n==2)
        c=b;
    else
    {
        for (i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
    }
    printf("The %dth term in the Fibonacci series is: %d", n, c);
    return 0;
}
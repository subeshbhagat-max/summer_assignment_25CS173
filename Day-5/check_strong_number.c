#include<stdio.h>
int main()  
{  
    int n, i, sum=0,fact, a,d;
    printf("Enter a number: ");
    scanf("%d", &n);
    a=n;
    while(a>0)
    {
        d=a%10;
        fact=1;
        for(i=1;i<=d;i++)
        {
            fact*=i;
        }
        sum+=fact;
        a/=10;
    }
    if(sum==n)
        printf("The number %d is a strong number",n);
    else
        printf("The number %d is not a strong number",n);
    return 0;
}
#include<stdio.h>
int main()
{
    int n, i, result = 0;
    printf("Enter a positive number : ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            result = 1;
            break;
        }
    }
    if(result == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}
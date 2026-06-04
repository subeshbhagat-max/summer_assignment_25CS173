#include<stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a > 0)
    {
        sum += a % 10; 
        a /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, reverse = 0;
    printf("Enter number a123: ");
    scanf("%d", &a);
    while(a > 0)
    {
        reverse = reverse * 10 + a % 10;
        a /= 10;
    }
    printf("Reversed number: %d\n", reverse);
    return 0;
}
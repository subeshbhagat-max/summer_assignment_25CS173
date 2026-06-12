#include <stdio.h>
int palindrome(int n)
{
    int reversed = 0, original = n, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}
int main ()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(palindrome(a))
    {
        printf("%d is a palindrome number",a);
    }
    else
    {
        printf("%d is not a palindrome number",a);
    }
    return 0;
}
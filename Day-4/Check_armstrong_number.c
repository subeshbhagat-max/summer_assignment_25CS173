#include <stdio.h>
int main() {
    int n, a, remain, result=0;
    printf("Enter the number n:");
    scanf ("%d",&n);
    a=n;
    while (a!=0)
    {
        remain=a%10;
        result+=remain*remain*remain;
        a/=10;
    }
    if (result==n)
        {
        printf("The entered number is an armstrong number");
        }
     else 
     {
        printf("The entered number is not an armstrong number" );
        }
        return 0;
    }
    
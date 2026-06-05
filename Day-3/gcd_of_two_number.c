#include <stdio.h>
int main ()
{
    int a,b,temp;
    printf("Enter the numbers =");
    scanf ("%d%d",&a,&b);
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("GCD of the given numbers is = %d",a);
    return 0;

} 
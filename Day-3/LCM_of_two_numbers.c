#include <stdio.h>
int main()
{
    int a,b,x,y,temp,gcd,lcm; 
    printf("Enter the numbers =");
    scanf ("%d%d",&a,&b);
    x=a;
    y=b;
    while (y!=0)
    {
        temp=y;
        y=x%y;
        x=temp;
    }
    gcd=x;
     lcm=(a*b)/gcd;
    printf("LCM of the given numbers is = %d",lcm);
    return 0;

}
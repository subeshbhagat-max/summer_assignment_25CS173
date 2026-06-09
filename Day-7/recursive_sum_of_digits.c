#include<stdio.h>
int sum_of_digits(int a)
{
    if (a==0)
    return 0;
    else
    return a % 10 + sum_of_digits(a / 10);
}
int main (){
    int a ;
    printf("Enter a number :");
    scanf ("%d",&a);
    printf("sum of digits of %d = %d",a,sum_of_digits(a));
    return 0;
}
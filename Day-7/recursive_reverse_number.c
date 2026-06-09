#include <stdio.h>
int reverse(int a, int rev)
{ 
    if (a==0)
    return rev;
    else 
    return reverse( a / 10, rev * 10 + a % 10);
}
int main (){
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Reverse of %d = %d",a,reverse(a,0));
    return 0;

}
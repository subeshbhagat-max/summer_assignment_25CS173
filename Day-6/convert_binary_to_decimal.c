#include <stdio.h>
#include <math.h>
int main(){
    int b, d = 0, i = 0, remain;
    printf("Enter a binary number: ");
    scanf("%d", &b);
    while (b != 0) {
        remain = b % 10;
        d += remain * pow(2, i);
        b /= 10;
        i++;
    }
    printf("Decimal number is : %d\n", d);
    return 0;
}
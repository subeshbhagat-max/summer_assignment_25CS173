#include<stdio.h>
int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int n,m ;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    printf("Maximum of %d and %d is %d", n, m, maximum(n, m));
    return 0;
}
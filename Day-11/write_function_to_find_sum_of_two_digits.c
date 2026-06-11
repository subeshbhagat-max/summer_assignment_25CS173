#include <stdio.h>
int sum(int a, int b)
{
    return a + b;

}
int main(){
    int n,m;
    printf("Enter the two numbers:");
    scanf("%d%d",&n,&m);
    int s=sum(n,m);
    printf("%d + %d = %d",n,m,s);
    return 0;
}
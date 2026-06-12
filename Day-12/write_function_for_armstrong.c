#include<stdio.h>
#include<math.h>
int Armstrong(int a)
{
    int n=a,sum=0,remain,digits=0;
     while(n>0)
     {
        digits++;
        n/=10;
     }
        n=a;
        while(n>0)
        {
            remain = n % 10;
            sum+=pow(remain,digits);
            n/=10;
        }
    return sum == a;
}
int main(){
    int x;
    printf("Enter a numbetr :");
    scanf("%d",&x);
    if(Armstrong(x))
    {
        printf("%d is a armstrong number",x);
    }
    else
    {
        printf("%d is not a armstrong number ",x);
    }
    return 0;
}
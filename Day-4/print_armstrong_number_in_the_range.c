#include <stdio.h>
#include <math.h>
int main() 
{ 
    int a,b ,i ,temp,remain,digit,sum;
    printf("Enter the starting and ending number of the range : ");
    scanf("%d%d",&a,&b);
    printf("Armstrong numbers in the range %d to %d are: ",a,b);
    for (i=a;i<=b;i++)
    {
        temp=i;
        sum=0;
        digit=(int)log10(i)+1;
        while (temp!=0)
        {    
            remain=temp%10;
            sum+=pow(remain,digit);
            temp/=10;
        }
        if (sum==i)
            printf("%d ",i);
    }
    return 0;
}
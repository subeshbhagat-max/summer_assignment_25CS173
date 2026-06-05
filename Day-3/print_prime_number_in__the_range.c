#include <stdio.h>
int main()
{
    int a,b,i,j,result = 0;
    printf("Enter the range =");
    scanf("%d%d",&a,&b);
    printf("Prime numbers between %d and %d are= ", a, b);
    for(i = a; i <= b; i++)
    {
        if(i == 1 || i == 0)
            continue;
        result = 1;
        for(j = 2; j <= i/2; ++j)
        {
            if(i % j == 0)
            {
                result = 0;
                break;
            }
        }
        if(result == 1)
            printf("%d , ", i);
    }
    return 0;
}
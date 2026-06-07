#include<stdio.h>
int main()  
{  
    int n, i, max;  
    printf("Enter a number: ");  
    scanf("%d", &n);  
    max = n/2;  
    for(i = 2; i <= max; i++)  
    {  
        if(n % i == 0)  
        {  
            n = n/i;  
            i--;  
        }  
    }  
    printf("Largest prime factor is: %d", n);  
    return 0;  
} 
#include <stdio.h>
int main()
{
    char l;
    printf("Enter the lowercase letter :");
    scanf("%c",&l);
    if(l>='a'&& l<='z')
    {
        l=l-32;
        printf("uppercase letter : %c",l);
    }
    else 
    {
        printf("not a lowercase character");
    }
    return 0;
}
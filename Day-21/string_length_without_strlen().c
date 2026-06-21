#include <stdio.h>

int main()
{
    char string[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    while(string[length] != '\0')
    {
        length++;
    }

    printf("Length of string = %d", length);

    return 0;
}
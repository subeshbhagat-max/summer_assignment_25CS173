#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not Rotation");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s1) != NULL)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
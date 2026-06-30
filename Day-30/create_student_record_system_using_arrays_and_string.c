#include <stdio.h>

int main()
{
    int n, i;
    int roll[100], age[100];
    float marks[100];
    char name[100][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Age: ");
        scanf("%d", &age[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n      Student Records        \n");

    printf("\nRoll\tName\tAge\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%.2f\n",
               roll[i], name[i], age[i], marks[i]);
    }

    return 0;
}
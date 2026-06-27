#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n========== STUDENT RECORDS ==========\n");
    printf("Roll\tName\t\tAge\tMarks\n");
    printf("------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%d\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].age,
               s[i].marks);
    }

    return 0;
}
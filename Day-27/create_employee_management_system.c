#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0;
    int choice, i, id, found;

    while (1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Employee Age: ");
            scanf("%d", &emp[n].age);

            printf("Enter Employee Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Employee Records Found!\n");
            }
            else
            {
                printf("\nEmployee Records:\n");
                printf("-------------------------------------------------\n");
                printf("ID\tName\t\tAge\tSalary\n");
                printf("-------------------------------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%d\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].age,
                           emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found!\n");
                    printf("ID     : %d\n", emp[i].id);
                    printf("Name   : %s\n", emp[i].name);
                    printf("Age    : %d\n", emp[i].age);
                    printf("Salary : %.2f\n", emp[i].salary);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 4:
            printf("Enter Employee ID to Update: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", emp[i].name);

                    printf("Enter New Age: ");
                    scanf("%d", &emp[i].age);

                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);

                    printf("Employee Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 5:
            printf("Enter Employee ID to Delete: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    found = 1;

                    printf("Employee Deleted Successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Employee Not Found!\n");

            break;

        case 6:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], age[100], salary[100];
    char name[100][50], department[100][30];
    int n = 0, choice, search, i, found;

    do
    {
        printf("\n      EMPLOYEE MANAGEMENT SYSTEM       \n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Employee Name: ");
                scanf("%s", name[n]);

                printf("Enter Age: ");
                scanf("%d", &age[n]);

                printf("Enter Department: ");
                scanf("%s", department[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                printf("\nEmployee Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo employee records found.\n");
                }
                else
                {
                    printf("\n___________________________________________________\n");
                    printf("ID\tName\tAge\tDepartment\tSalary\n");
                    printf("_____________________________________________________\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%d\t%s\t\t%d\n",
                               id[i], name[i], age[i],
                               department[i], salary[i]);
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to Search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", id[i]);
                        printf("Name       : %s\n", name[i]);
                        printf("Age        : %d\n", age[i]);
                        printf("Department : %s\n", department[i]);
                        printf("Salary     : %d\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nEmployee Not Found!\n");
                }

                break;

            case 4:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
#include <stdio.h>

int main()
{
    int a[100], n, i, choice;
    int sum = 0, max, min, key, found;

    do
    {
        printf("\n      ARRAY OPERATIONS MENU        \n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Find Sum\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Search Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += a[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 4:
                max = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] > max)
                        max = a[i];
                }
                printf("Maximum = %d\n", max);
                break;

            case 5:
                min = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] < min)
                        min = a[i];
                }
                printf("Minimum = %d\n", min);
                break;

            case 6:
                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(a[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.\n");

                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

    return 0;
}
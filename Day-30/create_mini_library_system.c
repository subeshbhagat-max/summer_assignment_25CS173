#include <stdio.h>
#include <string.h>

int main()
{
    char title[100][50], author[100][50];
    int bookid[100];
    int n = 0, choice, i, found;

    do
    {
        printf("\n      MINI LIBRARY SYSTEM      \n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &bookid[n]);

                printf("Enter Book Title: ");
                scanf("%s", title[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo books available.\n");
                }
                else
                {
                    printf("\nID\tTitle\tAuthor\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%s\n",
                               bookid[i], title[i], author[i]);
                    }
                }
                break;

            case 3:
                found = 0;
                printf("\nEnter Book Title to Search: ");
                scanf("%s", title[99]);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(title[i], title[99]) == 0)
                    {
                        printf("\nBook Found!\n");
                        printf("ID: %d\n", bookid[i]);
                        printf("Title: %s\n", title[i]);
                        printf("Author: %s\n", author[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

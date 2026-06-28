#include <stdio.h>
#include <string.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b[100];
    int n = 0, choice, i, acc, found;
    float amount;

    do
    {
        printf("\n      BANK ACCOUNT MANAGEMENT SYSTEM       \n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &b[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", b[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &b[n].balance);

                n++;
                printf("Account Created Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Accounts Found!\n");
                }
                else
                {
                    printf("\n--------------------------------------------------\n");
                    printf("Acc No\tName\t\tBalance\n");
                    printf("--------------------------------------------------\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%.2f\n",
                               b[i].accNo,
                               b[i].name,
                               b[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &acc);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == acc)
                    {
                        printf("\nAccount Found\n");
                        printf("Account No : %d\n", b[i].accNo);
                        printf("Name       : %s\n", b[i].name);
                        printf("Balance    : %.2f\n", b[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");

                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &acc);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == acc)
                    {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);

                        b[i].balance += amount;

                        printf("Deposit Successful!\n");
                        printf("Updated Balance = %.2f\n", b[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");

                break;

            case 5:
                printf("Enter Account Number: ");
                scanf("%d", &acc);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accNo == acc)
                    {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f", &amount);

                        if(amount <= b[i].balance)
                        {
                            b[i].balance -= amount;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance = %.2f\n", b[i].balance);
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");

                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}
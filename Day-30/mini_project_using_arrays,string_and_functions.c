#include <stdio.h>
#include <string.h>

#define MAX 100

int carId[MAX];
char company[MAX][30];
char model[MAX][30];
char color[MAX][20];
float price[MAX];
int n = 0;

void addCar()
{
    printf("\nEnter Car ID: ");
    scanf("%d", &carId[n]);

    printf("Enter Company Name: ");
    scanf("%s", company[n]);

    printf("Enter Car Model: ");
    scanf("%s", model[n]);

    printf("Enter Car Color: ");
    scanf("%s", color[n]);

    printf("Enter Car Price: ");
    scanf("%f", &price[n]);

    n++;

    printf("\nCar Record Added Successfully!\n");
}

void displayCars()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Car Records Available!\n");
        return;
    }

    printf("\n---------------------------------------------------------------\n");
    printf("ID\tCompany\t\tModel\t\tColor\t\tPrice\n");
    printf("---------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n",
               carId[i], company[i], model[i], color[i], price[i]);
    }
}

void searchCar()
{
    char searchModel[30];
    int i, found = 0;

    if(n == 0)
    {
        printf("\nNo Records Available!\n");
        return;
    }

    printf("\nEnter Car Model to Search: ");
    scanf("%s", searchModel);

    for(i = 0; i < n; i++)
    {
        if(strcmp(model[i], searchModel) == 0)
        {
            printf("\nCar Found!\n");
            printf("Car ID   : %d\n", carId[i]);
            printf("Company  : %s\n", company[i]);
            printf("Model    : %s\n", model[i]);
            printf("Color    : %s\n", color[i]);
            printf("Price    : %.2f\n", price[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nCar Not Found!\n");
    }
}

void updatePrice()
{
    int id, i, found = 0;

    if(n == 0)
    {
        printf("\nNo Records Available!\n");
        return;
    }

    printf("\nEnter Car ID to Update Price: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(carId[i] == id)
        {
            printf("Current Price: %.2f\n", price[i]);

            printf("Enter New Price: ");
            scanf("%f", &price[i]);

            printf("\nPrice Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nCar ID Not Found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n          CAR SALE RECORD MANAGEMENT               \n");
        printf("1. Add Car Record\n");
        printf("2. Display All Cars\n");
        printf("3. Search Car by Model\n");
        printf("4. Update Car Price\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addCar();
                break;

            case 2:
                displayCars();
                break;

            case 3:
                searchCar();
                break;

            case 4:
                updatePrice();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
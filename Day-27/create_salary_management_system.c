#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, pf;
    float gross, net;
};

int main()
{
    struct Employee emp;

    printf("      SALARY MANAGEMENT SYSTEM      \n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);

    
    emp.pf  = emp.basic * 0.08;   

    
    emp.gross = emp.basic ;
    emp.net = emp.gross - emp.pf;


    printf("\n          SALARY SLIP           \n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basic);
    printf("PF (8%%)       : %.2f\n", emp.pf);
    printf("-------------------------------\n");
    printf("Gross Salary  : %.2f\n", emp.gross);
    printf("Net Salary    : %.2f\n", emp.net);

    return 0;
}
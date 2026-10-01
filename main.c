#include <stdio.h>
#include "budget.h"
#include "employee.h"
#include "supplier.h"
#include "assets.h"

void showMenu();

int main () {
    int option;

do {
    showMenu();
    printf("Enter your choice:");
    scanf("%d", &option);
switch(option)
{
    case 1:
{
    int employeeOption;

    do
    {
        printf("\n========== EMPLOYEE MANAGEMENT ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search for Employee\n");
        printf("4. Calculate Salary Information\n");
        printf("5. Return to Main Menu\n");
        printf("=========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &employeeOption);

        switch (employeeOption)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                salaryInformation();
                break;

            case 5:
                printf("\nReturning to Main Menu...\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (employeeOption != 5);

    break;
}
    case 2:
    budgetManagement();
    break;
    case 3:
{
    int supplierOption;

    do
    {
        printf("\n========== SUPPLIER MANAGEMENT ==========\n");
        printf("1. Add Supplier\n");
        printf("2. Display Suppliers\n");
        printf("3. Search Supplier by ID\n");
        printf("4. Search Supplier by Name\n");
        printf("5. Return to Main Menu\n");
        printf("=========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &supplierOption);
        getchar();

        switch(supplierOption)
        {
            case 1:
                addSupplier();
                break;

            case 2:
                displaySuppliers();
                break;

            case 3:
                searchSupplierByID();
                break;

            case 4:
                searchSupplierByName();
                break;

            case 5:
                printf("\nReturning to Main Menu...\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while(supplierOption != 5);

    break;
}
    case 4:
{
    int assetOption;

    do
    {
        printf("\n========== ASSET MANAGEMENT ==========\n");
        printf("1. Add Asset\n");
        printf("2. Display Assets\n");
        printf("3. Search Asset\n");
        printf("4. Return to Main Menu\n");
        printf("======================================\n");
        printf("Enter your choice: ");
        scanf("%d", &assetOption);
        getchar();

        switch(assetOption)
        {
            case 1:
                addAsset();
                break;

            case 2:
                displayAssets();
                break;

            case 3:
                searchAsset();
                break;

            case 4:
                printf("\nReturning to Main Menu...\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while(assetOption != 4);

    break;
}
    case 5:
    printf("\nReports.\n");
    break;
    case 6:
    printf("\nExiting Municipal Financial System.\n");
    break;
    default:
    printf("Invalid option selected, Try again.\n");
                }
        } while (option !=6);
    
return 0;
    }
    void showMenu()
    {
        printf("\n");
        printf("==================================================\n");
        printf("        Municipal Financial Management\n");
        printf("==================================================\n");
        printf("1. Employee Management\n");
        printf("2. Budget Management\n");
        printf("3. Supplier Management\n");
        printf("4. Asset Management\n");
        printf("5. Reports\n");
        printf("6. Exit\n");
        printf("===================================================\n");
    }
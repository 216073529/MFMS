#include <stdio.h>
#include "budget.h"

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
    printf("\nEmployee Management.\n");
    break;
    case 2:
    budgetManagement();
    break;
    case 3:
    printf("\nSupplier Management.\n");
    break;
    case 4:
    printf("\nAsset Management.\n");
    break;
    case 5:
    printf("\nReports.\n");
    break;
    case 6:
    printf("\nExisting Municipal Finanicial System.\n");
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
        printf("3. Suplier Management\n");
        printf("4. Asset Management\n");
        printf("5. Reports\n");
        printf("6. Exit\n");
        printf("===================================================\n");
    }
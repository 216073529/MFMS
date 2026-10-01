#include <stdio.h>
#include "budget.h"

Budget budgets[MAX_BUDGETS];
int budgetCount = 0;

float calculateRemainingBudget(float allocatedBudget, float expenditure)
{
    return allocatedBudget - expenditure;
}

void addBudget()
{
    if (budgetCount >= MAX_BUDGETS)
    {
        printf("Maximum number of budgets reached.\n");
        return;
    }

    printf("\n--- ADD BUDGET ---\n");

    printf("Enter Department ID: ");
    scanf("%d", &budgets[budgetCount].departmentID);

    printf("Enter Department Name: ");
    scanf(" %[^\n]", budgets[budgetCount].departmentName);

    do
    {
        printf("Enter Allocated Budget: ");
        scanf("%f", &budgets[budgetCount].allocatedBudget);

        if (budgets[budgetCount].allocatedBudget < 0)
        {
            printf("Allocated budget cannot be negative.\n");
        }

    } while (budgets[budgetCount].allocatedBudget < 0);

    do
    {
        printf("Enter Expenditure: ");
        scanf("%f", &budgets[budgetCount].expenditure);

        if (budgets[budgetCount].expenditure < 0)
        {
            printf("Expenditure cannot be negative.\n");
        }

    } while (budgets[budgetCount].expenditure < 0);

    budgetCount++;

    printf("Budget added successfully.\n");
}

void displayBudgets()
{
    int i;

    if (budgetCount == 0)
    {
        printf("\nNo budgets available.\n");
        return;
    }

    printf("\n--- ALL BUDGETS ---\n");

    for (i = 0; i < budgetCount; i++)
    {
        printf("\nDepartment ID: %d\n", budgets[i].departmentID);
        printf("Department Name: %s\n", budgets[i].departmentName);
        printf("Allocated Budget: %.2f\n", budgets[i].allocatedBudget);
        printf("Expenditure: %.2f\n", budgets[i].expenditure);
        printf("Remaining Budget: %.2f\n",
               calculateRemainingBudget(
                   budgets[i].allocatedBudget,
                   budgets[i].expenditure));
if (budgets[i].expenditure <= budgets[i].allocatedBudget)
{
    printf("Status: WITHIN BUDGET\n");
}
else
{
    printf("Status: EXCEEDED BUDGET\n");
}
    }
}

void searchBudget()
{
    int id;
    int i;
    int found = 0;

    printf("\n--- SEARCH BUDGET ---\n");

    printf("Enter Department ID: ");
    scanf("%d", &id);

    for (i = 0; i < budgetCount; i++)
    {
        if (budgets[i].departmentID == id)
        {
            printf("\nDepartment ID: %d\n", budgets[i].departmentID);
            printf("Department Name: %s\n", budgets[i].departmentName);
            printf("Allocated Budget: %.2f\n", budgets[i].allocatedBudget);
            printf("Expenditure: %.2f\n", budgets[i].expenditure);
            printf("Remaining Budget: %.2f\n",
                   calculateRemainingBudget(
                       budgets[i].allocatedBudget,
                       budgets[i].expenditure));
if (budgets[i].expenditure <= budgets[i].allocatedBudget)
{
    printf("Status: WITHIN BUDGET\n");
}
else
{
    printf("Status: EXCEEDED BUDGET\n");
}

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Budget not found.\n");
    }
}

void displayExceededBudgets()
{
    int i;
    int found = 0;

    printf("\n--- BUDGETS THAT HAVE BEEN EXCEEDED ---\n");

    for (i = 0; i < budgetCount; i++)
    {
        if (budgets[i].expenditure > budgets[i].allocatedBudget)
        {
            printf("\nDepartment ID: %d\n", budgets[i].departmentID);
            printf("Department Name: %s\n", budgets[i].departmentName);
            printf("Allocated Budget: %.2f\n", budgets[i].allocatedBudget);
            printf("Expenditure: %.2f\n", budgets[i].expenditure);
            printf("Amount Exceeded: %.2f\n",
                   budgets[i].expenditure - budgets[i].allocatedBudget);

            found = 1;
        }
    }

    if (found == 0)
    {
        printf("No budgets have been exceeded.\n");
    }
}

void budgetManagement()
{
    int choice;

    do
    {
        printf("\n===== BUDGET MANAGEMENT =====\n");
        printf("1. Add Budget\n");
        printf("2. Display All Budgets\n");
        printf("3. Search Budget\n");
        printf("4. Display Exceeded Budgets\n");
        printf("5. Return to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBudget();
                break;

            case 2:
                displayBudgets();
                break;

            case 3:
                searchBudget();
                break;

            case 4:
                displayExceededBudgets();
                break;

            case 5:
                printf("Returning to main menu...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);
}
#ifndef BUDGET_H
#define BUDGET_H

#define MAX_BUDGETS 50

typedef struct
{
    int departmentID;
    char departmentName[50];
    float allocatedBudget;
    float expenditure;
} Budget;

extern Budget budgets[MAX_BUDGETS];
extern int budgetCount;

void budgetManagement();
void addBudget();
void displayBudgets();
void searchBudget();
void displayExceededBudgets();

float calculateRemainingBudget(float allocatedBudget, float expenditure);

#endif
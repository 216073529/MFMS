#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "supplier.h"

#define MAX_SUPPLIERS 100

struct Supplier {
    int supplierID;
    char supplierName[50];
    char email[50];
    char telephone[20];
    char location[50];
};

struct Supplier suppliers[MAX_SUPPLIERS];
int supplierCount = 0;


void addSupplier()
{
    char temp[100];

    if (supplierCount >= MAX_SUPPLIERS)
    {
        printf("\nSorry! Supplier list is full.\n");
        return;
    }

    printf("\n****** ADD SUPPLIER ******\n");

    printf("Enter Supplier ID: ");
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = '\0';
    suppliers[supplierCount].supplierID = atoi(temp);

    printf("Enter Supplier Name: ");
    fgets(suppliers[supplierCount].supplierName,
          sizeof(suppliers[supplierCount].supplierName), stdin);
    suppliers[supplierCount].supplierName[
        strcspn(suppliers[supplierCount].supplierName, "\n")] = '\0';

    printf("Enter Email: ");
    fgets(suppliers[supplierCount].email,
          sizeof(suppliers[supplierCount].email), stdin);
    suppliers[supplierCount].email[
        strcspn(suppliers[supplierCount].email, "\n")] = '\0';

    printf("Enter Telephone Number: ");
    fgets(suppliers[supplierCount].telephone,
          sizeof(suppliers[supplierCount].telephone), stdin);
    suppliers[supplierCount].telephone[
        strcspn(suppliers[supplierCount].telephone, "\n")] = '\0';

    printf("Enter Town/Location: ");
    fgets(suppliers[supplierCount].location,
          sizeof(suppliers[supplierCount].location), stdin);
    suppliers[supplierCount].location[
        strcspn(suppliers[supplierCount].location, "\n")] = '\0';

    supplierCount++;

    printf("\nSupplier added successfully!\n");
}

void displaySuppliers()
{
    printf("\n***** SUPPLIER INFORMATION *****\n");

    if (supplierCount == 0)
    {
        printf("No suppliers yet.\n");
        return;
    }

    for (int idx = 0; idx < supplierCount; idx++)
    {
        printf("\nSupplier ID: %d\n", suppliers[idx].supplierID);
        printf("Supplier Name: %s\n", suppliers[idx].supplierName);
        printf("Email: %s\n", suppliers[idx].email);
        printf("Telephone: %s\n", suppliers[idx].telephone);
        printf("Town/Location: %s\n", suppliers[idx].location);
    }
}

void searchSupplierByID()
{
    char temp[100];
    int searchID;
    int found = 0;

    printf("\nEnter Supplier ID to search: ");
    fgets(temp, sizeof(temp), stdin);
    searchID = atoi(temp);

    for (int idx = 0; idx < supplierCount; idx++)
    {
        if (suppliers[idx].supplierID == searchID)
        {
            printf("\nSupplier Found!\n");
            printf("Supplier ID: %d\n", suppliers[idx].supplierID);
            printf("Supplier Name: %s\n", suppliers[idx].supplierName);
            printf("Email: %s\n", suppliers[idx].email);
            printf("Telephone: %s\n", suppliers[idx].telephone);
            printf("Town/Location: %s\n", suppliers[idx].location);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nSupplier not found.\n");
    }
}


void searchSupplierByName()
{
    char searchName[50];
    int found = 0;

    printf("\nEnter Supplier Name: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    for (int idx = 0; idx < supplierCount; idx++)
    {
        if (strcmp(suppliers[idx].supplierName, searchName) == 0)
        {
            printf("\nSupplier Found!\n");
            printf("Supplier ID: %d\n", suppliers[idx].supplierID);
            printf("Supplier Name: %s\n", suppliers[idx].supplierName);
            printf("Email: %s\n", suppliers[idx].email);
            printf("Telephone: %s\n", suppliers[idx].telephone);
            printf("Town/Location: %s\n", suppliers[idx].location);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nSupplier not found.\n");
    }
}


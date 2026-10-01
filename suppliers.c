#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//define a structure to hold supplier information
struct Supplier {
    int supplierID;
    char supplierName[50];
    char email[50];
    char telephone[20];
    char location[50];
};

int main() //main function for supplier management system
{
    struct Supplier suppliers[100];
    int maxSuppliers = 100;
    int count = 0;
    int choice;
    int searchID;
    int found;
    char temp[100];
    //menu for supplier management system

    do
    {
        printf("\n****** SUPPLIER MANAGEMENT SYSTEM ******\n");
        printf("1. Add Supplier\n");
        printf("2. Display Suppliers\n");
        printf("3. Search Supplier by ID\n");
        printf("4. Search Supplier by Name\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        fgets(temp, sizeof(temp), stdin);
        choice = atoi(temp);

        switch(choice) //switch case for supplier management system
        {
            case 1://Prompt use r to enter supplier information
                if (count < maxSuppliers)
                {
                    printf("\n****** ADD SUPPLIER ******\n");

                    printf("Enter Supplier ID: ");
                    fgets(temp, sizeof(temp), stdin);
                    temp[strcspn(temp, "\n")] = '\0';
                    suppliers[count].supplierID = atoi(temp);

                    printf("Enter Supplier Name: ");
                    fgets(suppliers[count].supplierName, sizeof(suppliers[count].supplierName), stdin);
                    suppliers[count].supplierName[strcspn(suppliers[count].supplierName, "\n")] = '\0';

                    printf("Enter Email: ");
                    fgets(suppliers[count].email, sizeof(suppliers[count].email), stdin);
                    suppliers[count].email[strcspn(suppliers[count].email, "\n")] = '\0';

                    printf("Enter Telephone Number: ");
                    fgets(suppliers[count].telephone, sizeof(suppliers[count].telephone), stdin);
                    suppliers[count].telephone[strcspn(suppliers[count].telephone, "\n")] = '\0';

                    printf("Enter Town/Location: ");
                    fgets(suppliers[count].location, sizeof(suppliers[count].location), stdin);
                    suppliers[count].location[strcspn(suppliers[count].location, "\n")] = '\0';

                    count++;
                    printf("\nSupplier added successfully!\n");
                }
                else
                {
                    printf("\nSorry!, supplier list is full!\n");
                }
                break;

            case 2://display alllsupplier information in the system
                printf("\n*****  SUPPLIER INFORMATION *****\n");
                if(count == 0) printf("No suppliers yet.\n");
                for (int idx = 0; idx < count; idx++)
                {
                    printf("\nSupplier ID: %d\n", suppliers[idx].supplierID);
                    printf("Supplier Name: %s\n", suppliers[idx].supplierName);
                    printf("Email: %s\n", suppliers[idx].email);
                    printf("Telephone: %s\n", suppliers[idx].telephone);
                    printf("Town/Location: %s\n", suppliers[idx].location);
                }
                break;

            case 3: //search for supplier by ID and display their information if found
                printf("\nEnter Supplier ID to search: ");
                fgets(temp, sizeof(temp), stdin);
                searchID = atoi(temp);
                found = 0;

                for (int idx = 0; idx < count; idx++)//decision making to check if supplier ID exists in the system
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
                if (found == 0) printf("\nSupplier not found.\n");
                break;

            case 4: { //search for supplier by name and display their information if found
                char searchName[50];
                printf("\nEnter Supplier Name: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';
                found = 0;

                for (int idx = 0; idx < count; idx++)//decision making to check if supplier name exists in the system
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
                if (found == 0) printf("\nSupplier not found.\n");
                break;
            }

            case 5://exit case for supplier management system
                printf("\nHave a nice day!\n");
                break;

            default:
                printf("\nSorry, invalid choice.\n");
                break;
        }
    } while (choice!= 5);  //loop until the user choose to exit the supplier management system

    return 0;
}
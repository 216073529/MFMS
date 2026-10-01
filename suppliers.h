#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// define a structure to hold supplier information
struct Supplier {
    int supplierID;
    char supplierName[50];
    char email[50];
    char telephone[20];
    char location[50];
};

// Function declarations
void addSupplier(struct Supplier suppliers[], int *count, int maxSuppliers);
void displaySuppliers(struct Supplier suppliers[], int count);
void searchSupplierByID(struct Supplier suppliers[], int count);
void searchSupplierByName(struct Supplier suppliers[], int count);

#endif //SUPPLIER_H

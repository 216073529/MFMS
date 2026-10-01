#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Supplier {
    int supplierID;
    char supplierName[50];
    char email[50];
    char telephone[20];
    char location[50];
};

void addSupplier(struct Supplier suppliers[], int *count, int maxSuppliers);
void displaySuppliers(struct Supplier suppliers[], int count);
void searchSupplierByID(struct Supplier suppliers[], int count);
void searchSupplierByName(struct Supplier suppliers[], int count);

#endif 

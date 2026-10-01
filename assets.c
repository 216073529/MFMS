#include <stdio.h>
#include <string.h>
#include "assets.h"

#define MAX_ASSETS 100

struct Asset
{
    int assetID;
    char assetName[50];
    char assetType[50];
    float purchaseValue;
    char department[50];
    char condition[30];
};

struct Asset assets[MAX_ASSETS];
int assetCount = 0;

void addAsset()
{
    if (assetCount >= MAX_ASSETS)
    {
        printf("\nAsset list is full.\n");
        return;
    }

    printf("\n========== ADD ASSET ==========\n");

    printf("Enter Asset ID: ");
    scanf("%d", &assets[assetCount].assetID);
    getchar();

    printf("Enter Asset Name: ");
    fgets(assets[assetCount].assetName,
          sizeof(assets[assetCount].assetName), stdin);
    assets[assetCount].assetName[
        strcspn(assets[assetCount].assetName, "\n")] = '\0';

    printf("Enter Asset Type: ");
    fgets(assets[assetCount].assetType,
          sizeof(assets[assetCount].assetType), stdin);
    assets[assetCount].assetType[
        strcspn(assets[assetCount].assetType, "\n")] = '\0';

    printf("Enter Purchase Value: ");
    scanf("%f", &assets[assetCount].purchaseValue);
    getchar();

    printf("Enter Department: ");
    fgets(assets[assetCount].department,
          sizeof(assets[assetCount].department), stdin);
    assets[assetCount].department[
        strcspn(assets[assetCount].department, "\n")] = '\0';

    printf("Enter Condition: ");
    fgets(assets[assetCount].condition,
          sizeof(assets[assetCount].condition), stdin);
    assets[assetCount].condition[
        strcspn(assets[assetCount].condition, "\n")] = '\0';

    assetCount++;

    printf("\nAsset added successfully!\n");
}

void displayAssets()
{
    int i;

    printf("\n========== ASSET INFORMATION ==========\n");

    if (assetCount == 0)
    {
        printf("No assets available.\n");
        return;
    }

    for (i = 0; i < assetCount; i++)
    {
        printf("\nAsset ID: %d\n", assets[i].assetID);
        printf("Asset Name: %s\n", assets[i].assetName);
        printf("Asset Type: %s\n", assets[i].assetType);
        printf("Purchase Value: %.2f\n", assets[i].purchaseValue);
        printf("Department: %s\n", assets[i].department);
        printf("Condition: %s\n", assets[i].condition);
    }
}

void searchAsset()
{
    int id;
    int i;
    int found = 0;

    printf("\nEnter Asset ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < assetCount; i++)
    {
        if (assets[i].assetID == id)
        {
            printf("\nAsset Found!\n");
            printf("Asset ID: %d\n", assets[i].assetID);
            printf("Asset Name: %s\n", assets[i].assetName);
            printf("Asset Type: %s\n", assets[i].assetType);
            printf("Purchase Value: %.2f\n", assets[i].purchaseValue);
            printf("Department: %s\n", assets[i].department);
            printf("Condition: %s\n", assets[i].condition);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nAsset not found.\n");
    }
}
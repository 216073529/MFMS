#include <stdio.h>
#include <string.h>

#define Total_employee 50
struct Employee
{
    int employeeID;
    char employeeName[50];
    char department[50];
    float basicSalary;
    float housingAllowence;
    float transportAllowence;
    char position[50];
    char nextOfKkin[50];
};

struct Employee employees[Total_employee];
int employeeCount = 0;
/*void addEmployee();
void displayEmployees();
void searchEmployee();
void salaryInformation();
void displayEmployee(int i);
float getGrossSalary(int i);*/

//adding an employee
void addEmployee(){
    if(employeeCount >= Total_employee){
            printf("We can not add employee, limit reached!\n");
            return;
    }
    printf("\n--Adding An Employee--\n");

    printf("Enter Employee ID : ");
    scanf("%d", &employees[employeeCount].employeeID);
    getchar();

    printf(" Enter Employee Name : ");
    fgets(employees[employeeCount].employeeName, 50, stdin);
    employees[employeeCount].employeeName[strcspn(employees[employeeCount].employeeName, "\n")] = '\0';
    
    printf(" Enter next of kin Name : ");
    fgets(employees[employeeCount].nextOfKkin, 50, stdin);
    employees[employeeCount].nextOfKkin[strcspn(employees[employeeCount].nextOfKkin, "\n")] = '\0';
    
      printf(" Enter Department : ");
    fgets(employees[employeeCount].department, 50, stdin);
    employees[employeeCount].department[strcspn(employees[employeeCount].department, "\n")] = '\0';
    
       printf(" Enter job position : ");
    fgets(employees[employeeCount].position, 50, stdin);
    employees[employeeCount].position[strcspn(employees[employeeCount].position, "\n")] = '\0';

    printf("Enter Basic Salary : ");
    scanf("%f", &employees[employeeCount].basicSalary);

     printf("Enter House Allowence : ");
    scanf("%f", &employees[employeeCount].housingAllowence);

     printf("Enter Transport Allowence : ");
    scanf("%f", &employees[employeeCount].transportAllowence);

  

    employeeCount++;
    printf("\n Employee Successfully Added employees\n");
}

//calculating gross salary


    float getGrossSalary(int i) {
        return employees[i].basicSalary 
            +employees[i].housingAllowence
            +employees[i].transportAllowence;
    
    }
    void displayEmployee( int i){
        float GrossSalary = getGrossSalary(i);

        printf("\n===========================\n");
      printf(" Employee ID : %d\n", employees[i].employeeID);
      printf(" Employee Name : %s\n", employees[i].employeeName);
      printf(" Department : %s\n", employees[i].department);
      printf(" Basic Salary : %f\n", employees[i].basicSalary);
        printf(" House Allowence : %f\n", employees[i].housingAllowence);
        printf(" Transport Allowence : %f\n", employees[i].transportAllowence);
        printf(" Job position: %s\n", employees[i].position);
         printf("===========================\n");
    }
    void displayEmployees(){
        int i;
        if(employeeCount == 0){
            printf("No employee to display.\n");
            return;
        }
        printf("\n---List of all the employees---\n");
        for(i = 0; i < employeeCount; i++){

            displayEmployee(i);
        }
    }


    void searchEmployee(){
        int id;
        int i;
        int search = 0;
        if(employeeCount == 0){
            printf("\n No employee was added before. \n");
            return;
        }
        printf("\n To search enter Employee ID \n");
        scanf("%d",id);

        for(i = 0; i< employeeCount; i++){
            if(employees[i].employeeID == id){
                
                displayEmployee(i);
                search = 1;
                break;
            }
        }
        if(search == 0){
            printf("\n employee with ID %d was not found \n", id);

        }
    }

void salaryInformation() {
    int id;
    int i;
    int found = 0;

    float grossSalary;
    float tax;
    float netSalary;

    if (employeeCount == 0) {
        printf("\n Employees no found.\n");
        return;
    }

    printf("\n Enter the Employee ID: ");
    scanf("%d", &id);

    for (i = 0; i < employeeCount; i++) {

        if (employees[i].employeeID == id) {

            grossSalary = getGrossSalary(i);

            // Example: 10% tax
            tax = grossSalary * 0.20;

            netSalary = grossSalary - tax;

            printf("\n===== SALARY INFORMATION =====\n");
            printf("NAME : %s\n", employees[i].employeeName);
            printf("BASIC SALARY : %.2f\n",
                   employees[i].basicSalary);
            printf("HOUSE ALLOWENCE : %.2f\n",
                   employees[i].housingAllowence);
            printf("TRANSPORT ALLOWENCE: %.2f\n",
                   employees[i].transportAllowence);
            printf("JOB POSITION: %.2f\n",
                   employees[i].position);
            printf("GROSS SALARY: %.2f\n", grossSalary);
            printf("TAX (20%%): %.2f\n", tax);
            printf("NET SALARY: %.2f\n", netSalary);

            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("\nSorry we can find that employee.\n");
    }
}
int main() {
    int option;

    do {
        printf("\n----------------------------------\n");
        printf("       EMPLOYEE MANAGEMENT\n");
        printf("\n--------------------------------------\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search for Employee\n");
        printf("4. Calculate Salary Information\n");
        printf("5. Exit\n");
        printf("=================================\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        if (option == 1) {
            addEmployee();
        }
        else if (option == 2) {
            displayEmployees();
        }
        else if (option == 3) {
            searchEmployee();
        }
        else if (option == 4) {
            salaryInformation();
        }
        else if (option == 5) {
            printf("\nExiting Employee Management...\n");
        }
        else {
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (option != 5);

    return 0;
}
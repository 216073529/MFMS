#ifndef EMPLOYEE_H
#define EMPLOYEE_H

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

extern struct Employee employees[Total_employee];
extern int employeeCount;

void addEmployee();
void displayEmployees();
void searchEmployee();
void salaryInformation();

#endif
# Municipal Financial Management System (MFMS)

## PAP521S – Programming in Practice

Project A – Foundation System

Programming Language: ANSI C (C99)
Development Environment: Visual Studio Code + GCC
Version Control: Git & GitHub
Project Type: Group Project
Submission: Moodle + GitHub Repository
Due Date: 02 October 2026

---

## 1. Project Description

The Municipal Financial Management System (MFMS) is a menu-driven C application developed for the PAP521S Programming in Practice course.

The purpose of the system is to provide a basic computerized system for managing municipal financial and administrative information. The system demonstrates the use of C programming concepts including variables, data types, input/output, decision-making, loops, arrays, strings, functions, calculations, validation, and modular programming.

The project is being developed collaboratively using Git and GitHub.

---

## 2. System Modules

The system consists of the following main modules:

1. Employee Management
2. Budget Management
3. Supplier Management
4. Asset Management
5. Reports

The main menu provides access to each module and allows the user to exit the system.

---

## 3. Project Structure

```text
MFMS
├── .gitignore
├── main.c
├── employee.c
├── employee.h
├── budget.c
├── budget.h
├── supplier.c
├── supplier.h
├── assets.c
├── assets.h
├── reports.c
├── reports.h
└── README.md
```

---

## 4. Group Members

| No. | Name              | Student Number  | Responsibility                      |
| --- | ----------------- | --------------- | ----------------------------------- |
| 1   | Naftal Fotolela   | 213071916       | Testing & Documentation             |
| 2   | Corneluis D Frans | 216073529       | Functions, Integration & Validation |
| 3   | Dave K Angulah    | 201030586       | Budget Module                       |
| 4   | Kaluwa Martha     | 222051078       | Supplier Management                 |
| 5   | Tjiharuka Utjiwee | 219110972       | Assets Management
| 6   | Nalilongwe Lawrence  | 225081903   | EMployee Management                     |
| 7   | To be confirmed   | To be confirmed | To be confirmed                     |

---

## 5. Main Features

### Employee Management

The Employee Management module provides functionality for:

* Adding employees
* Displaying employee information
* Searching for employees using employee ID
* Calculating gross salary
* Displaying salary information
* Storing employee information using structures and arrays

### Budget Management

The Budget Management module provides functionality for:

* Entering departmental budgets
* Recording expenditure
* Calculating remaining budgets
* Determining whether departments are within budget
* Identifying departments that exceed their budgets

### Supplier Management

The Supplier Management module provides functionality for:

* Adding suppliers
* Displaying supplier information
* Searching for suppliers
* Comparing/searching supplier information
* Storing supplier details such as name, email, telephone number and location

### Asset Management

The Asset Management module provides functionality for:

* Adding and storing assets
* Displaying asset information
* Searching for assets
* Recording asset ID, name, type, purchase value, department and condition

### Reports

The Reports module provides summary information for:

* Employees
* Budgets
* Suppliers
* Assets

---

## 6. Compilation

Open the project folder in Visual Studio Code and compile the system using:

```bash
gcc *.c -o mfms
```

If compilation is successful, an executable named `mfms.exe` will be created.

---

## 7. Running the Program

After successful compilation, run the program using:

```powershell
.\mfms.exe
```

The system will display the main menu.

---

## 8. Main Menu

The main menu provides the following options:

```text
==================================================
        Municipal Financial Management
==================================================
1. Employee Management
2. Budget Management
3. Supplier Management
4. Asset Management
5. Reports
6. Exit
==================================================
```

---

## 9. Input Validation

The system includes validation to reduce incorrect input and improve reliability.

Examples include:

* Invalid menu selections
* Negative salary values
* Negative budget values
* Empty employee or supplier names
* Invalid numerical input
* Searching for records that do not exist

---

## 10. Testing

Testing is performed throughout development to identify and correct programming errors.

Testing includes:

* Compilation testing
* Menu testing
* Employee testing
* Budget testing
* Supplier testing
* Asset testing
* Report testing
* Search functionality testing
* Salary calculation testing
* Input validation testing
* Integration testing

Testing results and identified issues are documented as part of the project's development process.

---

## 11. Version Control

Git and GitHub are used for version control and collaboration.

The project repository allows group members to:

* Clone the project
* Create and modify source files
* Fix bugs
* Test changes
* Commit changes
* Push changes to GitHub
* Track individual contributions
* Collaborate on the same codebase

Each group member is expected to make identifiable contributions to the project.

---

## 12. Development Workflow

The project follows the general workflow:

```text
INPUT
  ↓
PROCESSING
  ↓
STORAGE
  ↓
SEARCH
  ↓
CALCULATION
  ↓
OUTPUT
```

Changes are tested before being committed to the repository.

---

## 13. Project Status

The MFMS project is currently under development and testing.

The group is working on:

* Completing individual modules
* Integrating modules into the main program
* Testing functionality
* Fixing programming errors
* Improving input validation
* Preparing documentation
* Preparing for demonstration and presentation

---

## 14. Future Development

Future versions of the system may include:

* Improved data validation
* More advanced reporting
* File/database storage
* Improved user interface
* Additional financial calculations
* More detailed municipal financial reports
* Expanded employee, supplier and asset management features

---

## 15. Academic Project

This project is developed as part of:

PAP521S – Programming in Practice

Project A – Municipal Financial Management System

The project demonstrates practical application of programming concepts covered during the course.

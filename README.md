# Employee Management System in C

## Explanation

The Employee Management System is a menu-driven C project used to manage employee records.

The program allows users to add employees, display employee information, search for an employee, update employee details, delete records, and calculate total salary.

The project demonstrates structures, arrays, functions, searching, updating, deleting, and salary calculations in C.

## Problem Statement

Develop a C program to manage employee records in an organization.

The system should allow the user to:

* Add employee details
* Display employee records
* Search for an employee
* Calculate total salary
* Update employee information
* Delete an employee record

## Features

* Add employee
* Display all employees
* Search employee by ID
* Calculate total salary
* Update employee details
* Delete employee records
* Menu-driven interface
* Supports multiple employee records

## How It Works

1. The program creates an `Employee` structure.
2. Employee records are stored in an array of structures.
3. The user selects an operation from the menu.
4. Employee details such as ID, name, department, and basic salary are entered.
5. HRA and DA are calculated from the basic salary.
6. The total salary is calculated.
7. Employee records can be searched, updated, or deleted.
8. The program continues until the user selects Exit.

## Salary Calculation

The program uses:

```text
HRA = 20% of Basic Salary
DA  = 10% of Basic Salary

Total Salary = Basic Salary + HRA + DA
```

## Technologies Used

* C Programming Language
* GCC Compiler
* Standard Input/Output Library
* String Handling Library

## Data Structure Used

### Array of Structures

An array of `Employee` structures is used to store multiple employee records.

Each employee contains:

* Employee ID
* Name
* Department
* Basic Salary
* Total Salary

## Methods Used

* `main()`
* `addEmployee()`
* `displayEmployees()`
* `searchEmployee()`
* `updateEmployee()`
* `deleteEmployee()`
* `calculateSalary()`
* Structures
* Arrays
* Functions
* `for` loop
* `do-while` loop
* `switch-case`
* `strcmp()` is not required because searching is performed using Employee ID

## Program Flow

```text
Start
  ↓
Create Employee Array
  ↓
Display Menu
  ↓
Select Operation
  ↓
 ┌────────┬─────────┬────────┬────────┬────────┐
 ↓        ↓         ↓        ↓        ↓
Add     Display    Search   Update   Delete
 ↓        ↓         ↓        ↓        ↓
Store    Show      Find     Modify   Remove
Data     Records   by ID    Record   Record
 ↓        ↓         ↓        ↓        ↓
Calculate Salary   │        │        │
 └────────┴────────┴────────┴────────┘
                    ↓
               Return to Menu
                    ↓
                  Exit?
               ↓          ↓
              No         Yes
              ↓           ↓
            Menu         End
```

## Sample Input

```text
====================================
       EMPLOYEE MANAGEMENT SYSTEM
====================================
1. Add Employee
2. Display Employees
3. Search Employee
4. Update Employee
5. Delete Employee
6. Exit
====================================
Enter your choice: 1

Enter Employee ID: 101
Enter Employee Name: Harini
Enter Department: IT
Enter Basic Salary: Rs. 30000
```

## Sample Output

```text
Employee added successfully.
```

### Display Employee

```text
Enter your choice: 2

========== Employee Records ==========

Employee ID    : 101
Name           : Harini
Department     : IT
Basic Salary   : Rs. 30000.00
Total Salary   : Rs. 39000.00
```

## Time Complexity

### Add Employee

`O(1)`

### Display Employees

`O(n)`

### Search Employee

`O(n)`

### Update Employee

`O(n)`

### Delete Employee

`O(n)`

Where `n` is the number of employee records.

## Space Complexity

`O(n)`

The program stores employee records in an array of structures.

## Key Learning

* Understanding structures
* Working with arrays of structures
* Creating modular functions
* Searching records
* Updating records
* Deleting records from arrays
* Performing salary calculations
* Building a real-world management system
* Using menu-driven programming

## File Location

```text
employee_management.c
```

## Repository Structure

```text
c-employee-management-system/
│
├── employee_management.c
└── README.md
```

## Author

V.Harini

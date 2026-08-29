#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    char department[50];
    float basicSalary;
    float totalSalary;
};

float calculateSalary(float basicSalary) {
    float hra;
    float da;

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;

    return basicSalary + hra + da;
}

void addEmployee(struct Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("\nEmployee list is full.\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &employees[*count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", employees[*count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", employees[*count].department);

    printf("Enter Basic Salary: Rs. ");
    scanf("%f", &employees[*count].basicSalary);

    employees[*count].totalSalary =
        calculateSalary(employees[*count].basicSalary);

    (*count)++;

    printf("\nEmployee added successfully.\n");
}

void displayEmployees(struct Employee employees[], int count) {
    int i;

    if (count == 0) {
        printf("\nNo employee records available.\n");
        return;
    }

    printf("\n========== Employee Records ==========\n");

    for (i = 0; i < count; i++) {
        printf("\nEmployee ID    : %d\n", employees[i].id);
        printf("Name           : %s\n", employees[i].name);
        printf("Department     : %s\n", employees[i].department);
        printf("Basic Salary   : Rs. %.2f\n",
               employees[i].basicSalary);
        printf("Total Salary   : Rs. %.2f\n",
               employees[i].totalSalary);
    }
}

void searchEmployee(struct Employee employees[], int count) {
    int id;
    int i;
    int found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("Employee ID    : %d\n", employees[i].id);
            printf("Name           : %s\n", employees[i].name);
            printf("Department     : %s\n", employees[i].department);
            printf("Basic Salary   : Rs. %.2f\n",
                   employees[i].basicSalary);
            printf("Total Salary   : Rs. %.2f\n",
                   employees[i].totalSalary);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nEmployee not found.\n");
    }
}

void updateEmployee(struct Employee employees[], int count) {
    int id;
    int i;
    int found = 0;

    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Enter new name: ");
            scanf(" %[^\n]", employees[i].name);

            printf("Enter new department: ");
            scanf(" %[^\n]", employees[i].department);

            printf("Enter new basic salary: Rs. ");
            scanf("%f", &employees[i].basicSalary);

            employees[i].totalSalary =
                calculateSalary(employees[i].basicSalary);

            found = 1;

            printf("\nEmployee updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("\nEmployee not found.\n");
    }
}

void deleteEmployee(struct Employee employees[], int *count) {
    int id;
    int i;
    int j;
    int found = 0;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < *count; i++) {
        if (employees[i].id == id) {

            for (j = i; j < *count - 1; j++) {
                employees[j] = employees[j + 1];
            }

            (*count)--;
            found = 1;

            printf("\nEmployee deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("\nEmployee not found.\n");
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\n====================================\n");
        printf("       EMPLOYEE MANAGEMENT SYSTEM\n");
        printf("====================================\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("====================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addEmployee(employees, &count);
                break;

            case 2:
                displayEmployees(employees, count);
                break;

            case 3:
                searchEmployee(employees, count);
                break;

            case 4:
                updateEmployee(employees, count);
                break;

            case 5:
                deleteEmployee(employees, &count);
                break;

            case 6:
                printf("\nThank you for using Employee Management System.\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Structure for Date of Birth
struct DOB {
    int day;
    int month;
    int year;
};

// Structure for Employee
struct Employee {
    int id;
    char name[50];
    char department[20];
    struct DOB dob;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int i;

    // Input employee records
    printf("Enter details of 100 employees:\n");
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("\nEmployee %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &employees[i].id);
        getchar(); // Clear buffer
        
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline

        printf("Department: ");
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        employees[i].department[strcspn(employees[i].department, "\n")] = '\0'; // Remove newline
        
        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &employees[i].dob.day, &employees[i].dob.month, &employees[i].dob.year);
    }

    // Display employees in "Sales" department
    printf("\nEmployees in Sales Department:\n");
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        if (strcmp(employees[i].department, "Sales") == 0) {
            printf("\nID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("DOB: %02d-%02d-%04d\n", employees[i].dob.day, employees[i].dob.month, employees[i].dob.year);
        }
    }

    return 0;
}

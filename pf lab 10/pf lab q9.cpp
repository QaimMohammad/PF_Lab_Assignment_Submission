#include <stdio.h>

struct Employee {
    int employeeID;
    char name[50];
    char department[50];
    float salary;
};

void displayEmployee(struct Employee emp) {
    printf("\nEmployee ID: %d\n", emp.employeeID);
    printf("Name: %s\n", emp.name);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct Employee employees[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        
        printf("Name: ");
        getchar();
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        
        printf("Department: ");
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    
    printf("\nEmployee Information:\n");
    for (int i = 0; i < n; i++) {
        displayEmployee(employees[i]);
    }

    return 0;
}


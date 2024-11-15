#include <stdio.h>
#include <string.h>

#define MAX_CARS 10  

struct Car {
    char make[20];
    char model[20];
    int year;
    float price;
    int mileage;
};

void displayCar(struct Car car) {
    printf("Make: %s, Model: %s, Year: %d, Price: %.2f, Mileage: %d\n",
           car.make, car.model, car.year, car.price, car.mileage);
}

int main() {
    struct Car cars[MAX_CARS];
    int n = 0; 
    int choice;

    while (1) {
        printf("\nCar Management System\n");
        printf("1. Add New Car\n");
        printf("2. Display All Cars\n");
        printf("3. Search for a Car\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (n < MAX_CARS) {
                printf("Enter car make: ");
                scanf("%s", cars[n].make);
                printf("Enter car model: ");
                scanf("%s", cars[n].model);
                printf("Enter car year: ");
                scanf("%d", &cars[n].year);
                printf("Enter car price: ");
                scanf("%f", &cars[n].price);
                printf("Enter car mileage: ");
                scanf("%d", &cars[n].mileage);
                n++;
                printf("Car added successfully!\n");
            } else {
                printf("Car list is full!\n");
            }
        } else if (choice == 2) {
            if (n == 0) {
                printf("No cars available.\n");
            } else {
                printf("List of available cars:\n");
                for (int i = 0; i < n; i++) {
                    displayCar(cars[i]);
                }
            }
        } else if (choice == 3) {
            char searchTerm[20];
            int found = 0;
            printf("Enter the make or model to search for: ");
            scanf("%s", searchTerm);
            for (int i = 0; i < n; i++) {
                if (strstr(cars[i].make, searchTerm) != 0 || strstr(cars[i].model, searchTerm) != 0) {
                    displayCar(cars[i]);
                    found = 1;
                }
            }
            if (!found) {
                printf("No cars found matching '%s'.\n", searchTerm);
            }
        } else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


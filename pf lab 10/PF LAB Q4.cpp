#include <stdio.h>
#include <string.h>


struct TravelPackage {
    char packageName[50];
    char destination[50];
    int duration;      
    float cost;        
    int availableSeats;
};


void displayPackage(struct TravelPackage package) {
    printf("\nPackage Name: %s\n", package.packageName);
    printf("Destination: %s\n", package.destination);
    printf("Duration: %d days\n", package.duration);
    printf("Cost: %.2f\n", package.cost);
    printf("Available Seats: %d\n", package.availableSeats);
}


void bookPackage(struct TravelPackage packages[], int n) {
    int choice, numSeats;

    printf("\nEnter the number of the package you want to book (1 to %d): ", n);
    scanf("%d", &choice);

  
    if (choice < 1 || choice > n) {
        printf("Invalid choice.\n");
        return;
    }

  
    printf("Enter the number of seats you want to book: ");
    scanf("%d", &numSeats);

    
    if (packages[choice - 1].availableSeats >= numSeats) {
        packages[choice - 1].availableSeats -= numSeats; 
        printf("Booking successful! You have booked %d seats.\n", numSeats);
    } else {
        printf("Not enough seats available. Only %d seats are available.\n", packages[choice - 1].availableSeats);
    }
}

int main() {

    struct TravelPackage packages[5] = {
        {"Beach Paradise", "Maldives", 7, 1200.50, 50},
        {"Mountain Adventure", "Swiss Alps", 10, 1800.75, 30},
        {"City Tour", "New York", 5, 900.00, 20},
        {"Desert Safari", "Dubai", 4, 650.00, 25},
        {"Cultural Journey", "Kyoto", 8, 1300.00, 15}
    };

    int n = 5; 
    int choice;

    while (1) {
        printf("\nTravel Package Booking System\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Travel Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
               
                printf("\nAvailable Travel Packages:\n");
                for (int i = 0; i < n; i++) {
                    displayPackage(packages[i]);
                }
                break;
            case 2:
            
                bookPackage(packages, n);
                break;
            case 3:
                
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


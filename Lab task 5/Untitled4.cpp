#include <stdio.h>

int main() {
    float purchaseamount;
    char membershipstatus; 
  

    
    printf("Enter the total purchase amount: $");
    scanf("%f", &purchaseamount);

    printf("Do you have a membership? (Y/N): ");
    scanf(" %c", &membershipstatus); 
        (purchaseamount>100 && membershipstatus=='Y' || membershipstatus=='y') ? printf("You Are Eligible For The Discount!\n") : printf("You are NOT Eligible For The Discount!\n");
   
    return 0;
}


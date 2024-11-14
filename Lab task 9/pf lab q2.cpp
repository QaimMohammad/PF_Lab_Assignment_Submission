#include <stdio.h>

int main() {
    int bolts, nuts, washers;
    
    printf("Enter number of bolts: ");
    scanf("%d", &bolts);
    
    printf("Enter number of nuts: ");
    scanf("%d", &nuts);
    
    printf("Enter number of washers: ");
    scanf("%d", &washers);
    
   
    int totalCost = bolts * 5 + nuts * 3 + washers * 1;
    

    if (nuts < bolts)
	 printf("Check the Order: too few nuts\n");
    if (washers < 2 * bolts)
	 printf("Check the Order: too few washers\n");
    if (nuts >= bolts && washers >= 2 * bolts)
	printf("Order is OK.\n");
    
  
    printf("Total cost: $%d\n", totalCost);
    
    return 0;
}


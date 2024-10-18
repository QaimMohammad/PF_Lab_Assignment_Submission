#include<stdio.h>

int main() {
    int array[30], i;
    int min, max;
    
  
    printf("Enter 30 numbers:\n");
    for (i = 0; i < 30; i++) {
        scanf("%d", &array[i]);
    }
    
  
    min = max = array[0];
    
   
    for (i = 1; i < 30; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    
   
    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);
    
    return 0;
}


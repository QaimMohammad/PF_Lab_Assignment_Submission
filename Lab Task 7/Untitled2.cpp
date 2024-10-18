#include <stdio.h>

int main() {
    int size, i;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  

    
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Before: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

   
    int first = arr[0];
    for (i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;

   
    printf("\nAfter: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


#include <stdio.h>

void printArray(int arr[], int n) {
    if (n == 0) return;  
    printf("%d ", arr[0]);  
    printArray(arr + 1, n - 1);  
}

int main() {
    int n;

  
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    printf("Array elements: ");
    printArray(arr, n);  

    return 0;
}


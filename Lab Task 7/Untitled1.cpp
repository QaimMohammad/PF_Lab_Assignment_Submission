#include <stdio.h>

int main() {
    int arr[] = {1, 1, 1, 1, 1, 5, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num, found = 0;

    printf("Enter integer to search: ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            printf("%d found at index %d\n", num, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number not found\n");
    }

    return 0;
}


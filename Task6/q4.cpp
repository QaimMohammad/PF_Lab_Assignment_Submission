#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);

        sum += num;

        if (num != 0) {
            printf("Current sum: %d\n", sum);
        }
    } while (num != 0);

    printf("Final sum: %d\n", sum);
    return 0;
}


#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("no\n");
        }
    } while (num <= 0);

    printf("Good Job!\n", num);
    return 0;
}


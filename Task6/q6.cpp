#include <stdio.h>


int isPrime(int num) {
    if (num <= 1)
	 return 0;  
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci series for %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("This is a prime number\n");
        printFibonacci(num);
    } else {
        printf("This is not a prime number\n");
    }

    return 0;
}


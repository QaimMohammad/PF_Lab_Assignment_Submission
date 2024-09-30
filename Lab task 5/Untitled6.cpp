#include <stdio.h>

int countOnes(int a) {
    int count = 0;

    count += (a & 1);
    count += (a >> 1) & 1;
    count += (a >> 2) & 1;
    count += (a >> 3) & 1;
    count += (a >> 4) & 1;
    count += (a >> 5) & 1;
    count += (a >> 6) & 1;
    count += (a >> 7) & 1;
    count += (a >> 8) & 1;
    count += (a >> 9) & 1;
    count += (a >> 10) & 1;
    count += (a >> 11) & 1;
    count += (a >> 12) & 1;
    count += (a >> 13) & 1;
    count += (a >> 14) & 1;
    count += (a >> 15) & 1;
    count += (a >> 16) & 1;
    count += (a >> 17) & 1;
    count += (a >> 18) & 1;
    count += (a >> 19) & 1;
    count += (a >> 20) & 1;
    count += (a >> 21) & 1;
    count += (a >> 22) & 1;
    count += (a >> 23) & 1;
    count += (a >> 24) & 1;
    count += (a >> 25) & 1;
    count += (a >> 26) & 1;
    count += (a >> 27) & 1;
    count += (a >> 28) & 1;
    count += (a >> 29) & 1;
    count += (a >> 30) & 1;
    count += (a >> 31) & 1;

    return count;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = countOnes(number);
    
    printf("Number of 1s in binary representation of %d is: %d\n", number, result);
    
    return 0;
}



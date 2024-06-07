#include <stdio.h>

int isPrime(int num, int i) {
    if (i == 1) {
        return 1; // Base case: if i reaches 1, the number is prime
    } else {
        if (num % i == 0) {
            return 0; // If the number is divisible by any number other than 1 and itself, it's not prime
        } else {
            return isPrime(num, i - 1); // Recursively check for divisibility with numbers from num-1 to 2
        }
    }
}

int main() {
    int num;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is not a prime number.\n", num);
    } else {
        if (isPrime(num, num / 2) == 1) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}

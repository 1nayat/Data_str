#include <stdio.h>

int sumOfDigits(int number) {
    if(number == 0) {
        return 0;
    }
    else {
        return (number % 10 + sumOfDigits(number / 10));
    }
}

int main() {
    int number, sum;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    sum = sumOfDigits(number);
    
    printf("Sum of digits of the number: %d\n", sum);
    
    return 0;
}

#include <stdio.h>

int reverseNumber(int number) {
    static int reversedNum = 0;
    
    if(number == 0) {
        return reversedNum;
    }
    
    reversedNum = reversedNum * 10 + number % 10;
    
    return reverseNumber(number / 10);
}

int main() {
    int number, reversedNumber;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    reversedNumber = reverseNumber(number);
    
    printf("Reversed number: %d\n", reversedNumber);
    
    return 0;
}

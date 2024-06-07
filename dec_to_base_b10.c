#include <stdio.h>

void decToBase(int decimalNumber, int base) {
    if(decimalNumber == 0) {
        return;
    }
    else {
        decToBase(decimalNumber / base, base);
        printf("%d", decimalNumber % base);
    }
}

int main() {
    int decimalNumber, base;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    printf("Enter the base (less than 10): ");
    scanf("%d", &base);
    
    printf("Equivalent in base %d: ", base);
    if(decimalNumber == 0) {
        printf("0");
    }
    else {
        decToBase(decimalNumber, base);
    }
    
    return 0;
}

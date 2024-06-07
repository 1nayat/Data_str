#include <stdio.h>

void decToHex(int decimalNumber) {
    if(decimalNumber == 0) {
        return;
    }
    else {
        decToHex(decimalNumber / 16);
        int remainder = decimalNumber % 16;
        if(remainder < 10) {
            printf("%d", remainder);
        }
        else {
            printf("%c", 'A' + remainder - 10);
        }
    }
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    
    printf("Hexadecimal equivalent: ");
    if(decimalNumber == 0) {
        printf("0");
    }
    else {
        decToHex(decimalNumber);
    }
    
    return 0;
}

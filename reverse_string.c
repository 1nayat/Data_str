#include <stdio.h>

void reverseString(char str[], char reversed[]) {
    int length = 0, i;
    
    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }
    
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    
    reversed[length] = '\0';
}

int main() {
    char str[] = "Hello, World!";
    char reversed[100]; 

    reverseString(str, reversed);

    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n", reversed);

    return 0;
}


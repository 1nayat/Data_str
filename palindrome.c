#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int length = 0, i;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[] = "madam"; 

    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}


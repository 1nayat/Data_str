#include <stdio.h>

void concatenate(char result[], char str1[], char str2[]) {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            result[i] = str1[i] - ('a' - 'A');
        } else {
            result[i] = str1[i];
        }
    }

    // Copy second string to result, converting to uppercase
    for (j = 0; str2[j] != '\0'; j++) {
        if (str2[j] >= 'a' && str2[j] <= 'z') {
            result[i + j] = str2[j] - ('a' - 'A');
        } else {
            result[i + j] = str2[j];
        }
    }

    result[i + j] = '\0';
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char result[100]; 

    concatenate(result, str1, str2);

    printf("Concatenated String: %s\n", result);

    return 0;
}


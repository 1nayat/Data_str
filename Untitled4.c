#include <stdio.h>

int main() {
    int a[10], i, j, index, key;

    // Input array elements
    for (i = 0; i < 10; i++) {
        printf("Enter element of the array: ");
        scanf("%d", &a[i]);
    }

    // Input the element to remove
    printf("Enter the element you want to remove: ");
    scanf("%d", &key);

    // Initial index of the last element
    index = 9;

    // Remove occurrences of key
    for (i = 0; i <= index; i++) {
        if (a[i] == key) {
            for (j = i + 1; j <= index; j++) {
                a[j - 1] = a[j];
            }
            i--;
            index--;
        }
    }

    // Print the array after removing the key
    printf("Array after removing %d:\n", key);
    for (i = 0; i <= index; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}


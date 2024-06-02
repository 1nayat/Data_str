#include <stdio.h>

int main() {
    int size, i, j, delElement;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to be deleted
    printf("Enter the element to be deleted: ");
    scanf("%d", &delElement);
    
    // Delete the given element from the array
    for (i = 0; i < size; i++) {
        if (arr[i] == delElement) {
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
    
    // Print the array after deletion
    printf("Array after deleting %d: ", delElement);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

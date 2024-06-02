#include <stdio.h>

int main() {
    int size, i, pos, newValue;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size + 1]; // Increase the size of the array to accommodate the new element
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the position and value of the new element to be inserted
    printf("Enter the position to insert the new element: ");
    scanf("%d", &pos);
    
    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);
    
    // Shift elements to the right to make space for the new element
    for (i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element at the specified position
    arr[pos - 1] = newValue;
    
    size++; // Increase the size of the array
    
    // Print the array after insertion
    printf("Array after inserting %d at position %d: ", newValue, pos);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void findSumAndAverage(struct Node* head, int* sum, float* average) {
    int count = 0;
    *sum = 0;

    struct Node* current = head;

    while (current != NULL) {
        *sum += current->data;
        count++;
        current = current->next;
    }

    if (count > 0) {
        *average = (float)(*sum) / count;
    } else {
        *average = 0.0f;
    }
}

int main() {
    struct Node* head = NULL;

    addNode(&head, 10);
    addNode(&head, 20);
    addNode(&head, 5);
    addNode(&head, 30);
    addNode(&head, 15);

    int sum;
    float average;
    findSumAndAverage(head, &sum, &average);

    printf("Sum of elements in the list: %d\n", sum);
    printf("Average of elements in the list: %.2f\n", average);

    return 0;
}


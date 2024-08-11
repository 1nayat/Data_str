#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void calculateVarianceAndStdDev(struct Node* head, float* variance, float* std_dev) {
    int count = 0;
    float sum = 0, mean = 0, sum_squared_diff = 0;

    struct Node* current = head;

    while (current != NULL) {
        sum += current->data;
        count++;
        current = current->next;
    }

    if (count > 0) {
        mean = sum / count;
    } else {
        *variance = 0;
        *std_dev = 0;
        return;
    }

    current = head;

    while (current != NULL) {
        sum_squared_diff += pow(current->data - mean, 2);
        current = current->next;
    }

    *variance = sum_squared_diff / count;

    *std_dev = sqrt(*variance);
}

int main() {
    struct Node* head = NULL;

    addNode(&head, 10);
    addNode(&head, 20);
    addNode(&head, 5);
    addNode(&head, 30);
    addNode(&head, 15);

    float variance, std_dev;
    calculateVarianceAndStdDev(head, &variance, &std_dev);

    printf("Variance of elements in the list: %.2f\n", variance);
    printf("Standard Deviation of elements in the list: %.2f\n", std_dev);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char publisher[100];
    int pages;
    float price;
    struct Book* next;  
};


struct Book* createBook(char* title, char* publisher, int pages, float price) {
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));
    strcpy(newBook->title, title);
    strcpy(newBook->publisher, publisher);
    newBook->pages = pages;
    newBook->price = price;
    newBook->next = NULL;
    return newBook;
}

void addBook(struct Book** head, char* title, char* publisher, int pages, float price) {
    struct Book* newBook = createBook(title, publisher, pages, price);
    newBook->next = *head;
    *head = newBook;
}

void displayBooks(struct Book* head) {
    struct Book* temp = head;
    while (temp != NULL) {
        printf("Title: %s\n", temp->title);
        printf("Publisher: %s\n", temp->publisher);
        printf("Pages: %d\n", temp->pages);
        printf("Price: $%.2f\n", temp->price);
        printf("-----------------------\n");
        temp = temp->next;
    }
}

int main() {
    struct Book* head = NULL; 

 
    addBook(&head, "The C Programming Language", "Prentice Hall", 274, 45.50);
    addBook(&head, "Clean Code", "Prentice Hall", 464, 40.99);
    addBook(&head, "The Pragmatic Programmer", "Addison-Wesley", 352, 47.99);
    addBook(&head, "Introduction to Algorithms", "MIT Press", 1312, 99.95);
    addBook(&head, "Design Patterns", "Addison-Wesley", 395, 54.95);


    displayBooks(head);

    return 0;
}


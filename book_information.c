#include <stdio.h>

struct Book {
    int bookId;
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book book;

    printf("===== Book Information =====\n");

    printf("Enter Book ID: ");
    scanf("%d", &book.bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book.author);

    printf("Enter Book Price: ");
    scanf("%f", &book.price);

    printf("\n----- Book Details -----\n");
    printf("Book ID: %d\n", book.bookId);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);

    return 0;
}

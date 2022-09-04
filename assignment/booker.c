#include<stdio.h>

void book(char author[100], float price, char book_title[60], int book_number, int number_of_copies);
int main()
{
    char author[100], book_title[60];
    float price;
    int book_number, number_of_copies;
    printf("Name:");
    scanf("%s", author);
    printf("Price:");
    scanf("%f", &price);
    printf("Title:");
    scanf("%s", book_title);
    printf("Book Number:");
    scanf("%d", &book_number);
    printf("Number of copies:");
    scanf("%d", &number_of_copies);
    book(author, price, book_title, book_number, number_of_copies);
    return 0;
}
void book(char author[100], float price, char book_title[60], int book_number, int number_of_copies)
{
    printf("Name: %s", author);
    printf("\n");
    printf("Price: %f", price);
    printf("\n");
    printf("Title: %s", book_title);
    printf("\n");
    printf("Book Number: %d", book_number);
    printf("\n");
    printf("Number or copies: %d", number_of_copies);
}
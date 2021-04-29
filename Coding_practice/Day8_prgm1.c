#include <stdio.h>
#include <stdlib.h>
struct stall{
    int id,price;
    char title[20],author[20];
};
typedef struct stall st;
int main()
{
    st book;
    printf("Enter the book id, title, author and price\n");
    scanf("%d%s%s%d",&(book.id), book.title, book.author, &(book.price));
    printf("Book ID: %d\nBook Title: %s\nBook Author: %s\nBook Price: %d\n", book.id, book.title, book.author, book.price);
}

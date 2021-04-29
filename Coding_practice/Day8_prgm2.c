#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stall{
    int id,price;
    char title[20],author[20];
};
typedef struct stall st;
void update(st *book, int n);
int main()
{
    int i,n,flag=0;
    st book[10];
    printf("Enter the number of books\n"); scanf("%d",&n);
    printf("Enter the book id, title, author and price\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s%d",&(book[i].id), book[i].title, book[i].author, &(book[i].price));
        printf("Book ID: %d\nBook Title: %s\nBook Author: %s\nBook Price: %d\n", book[i].id, book[i].title, book[i].author, book[i].price);
    }
    for(;;)
    {
        printf("To update the price enter 1; 0 to exit\n");
        scanf("%d",&flag);
        if(flag==1)
        {
            update(book,n);
        }
        else
        {
            break;
        }
    }
    
}

void update(st *book, int n)
{
    char s[10];
    int i,j,k;
    printf("Enter the title\n");
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(!strcmp(s,book[i].title))
        {
            printf("Enter the price\n");
            scanf("%d",&(book[i].price));
            printf("Book ID: %d\nBook Title: %s\nBook Author: %s\nBook Price: %d\n", book[i].id, book[i].title, book[i].author, book[i].price);
        }
        else if(i==n-1)
        {
            printf("No book with title %s\n",s);
            break;
        }
    }
}

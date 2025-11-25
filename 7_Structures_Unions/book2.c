#include<stdio.h>
#include<string.h>

struct books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_Id;
};

void printbook(struct books book);

int main ()
{
    struct books books1;
    struct books books2;

    strcpy(books1.title, "C");
    strcpy(books1.author, "sayan");
    strcpy(books1.subject, "programming");
    books1.book_Id = 1;   

    strcpy(books2.title, "C");
    strcpy(books2.author, "adnan");
    strcpy(books2.subject, "programming");
    books2.book_Id = 2;   

    printbook(books1);
    printbook(books2);

    return 0;
}

void printbook(struct books book)
{
    printf("Book Title : %s\n", book.title);
    printf("Author     : %s\n", book.author);
    printf("Subject    : %s\n", book.subject);
    printf("Book ID    : %d\n\n", book.book_Id);
}

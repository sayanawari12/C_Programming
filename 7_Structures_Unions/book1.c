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

    strcpy(books1.title,"c");
    strcpy(books1.author,"sayan");
    strcpy(books1.subject,"programing");
    (books1.book_Id);

    strcpy(books2.title,"C");
    strcpy(books2.author,"adnan");
    strcpy(books2.subject,"programing");
    (books2.book_Id);

     return 0;

}

    void printbooks(struct books book)
{
printf("book title :%s\n",book.title);
}
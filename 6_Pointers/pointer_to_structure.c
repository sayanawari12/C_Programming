#include<stdio.h>
#include<string.h>
struct book
{
    char title [50]; 
    char author [50];
    double price;
    int pages;

};
int main ()
{
struct book book1 = {"the last knight","sayan",888.8,99};
struct book *strptr;
strptr = &book1;
printf("title: %s\n", strptr->title);
printf("author: %s\n", strptr->author);
printf("price: %lf\n", strptr->price);
printf("pages: %d\n", strptr->pages);
return 0;
}
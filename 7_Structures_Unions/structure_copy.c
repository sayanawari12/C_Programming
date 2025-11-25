#include<stdio.h>
struct book
{
    char title [50];
    char author [50];
    int pages;
    double prize;
};  

 int main ()
{
    struct book book1 = {"BMW","sayan",10,300},book2;
    book2 = book1;
    printf("title:%s\n",book1.title);
    printf("author:%s\n",book1.author);
    printf("pages:%d\n",book1.pages);
    printf("prize:%.0lf\n",book1.prize);

    return 0;
 
}

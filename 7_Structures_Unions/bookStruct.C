#include<stdio.h>
#include<string.h>
typedef struct book
{
    char title[50];
    int pages;
    double price;

}book;

int main ()
{
    book b[3];
    strcpy(b[0].title,"sayan");
    b[0].pages = 25;
    b[0].price = 255.00;

    strcpy(b[1].title,"vk");
    b[1].pages = 27;
    b[1].price = 245.00;
    
    strcpy(b[2].title,"adnan");
    b[2].pages = 20;
    b[2].price = 235.00;

    printf("list of book\n");
    for(int i=0; i<3;i++)
    {
        printf("title:%s \t pages: %d \t price: %lf\n",b[i].title,b[i].pages,b[i].price);
         
    }
    

return 0;
}
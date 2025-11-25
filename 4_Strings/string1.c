#include<stdio.h>
#include<string.h>
int main () 
{
    char arr []= "my name is sayan\0";
    int i=0;
    while (arr[i]!='\0')

    {
        printf("%c",arr[i]);
        i++;
       
    }
        return 0;
}
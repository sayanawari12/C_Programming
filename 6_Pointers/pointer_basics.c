#include<stdio.h>

int main ()
{
    int a = 20;
    int *b;

    b = &a;

    printf("address of a variable   : %p\n", &a);// yaha pe a ka address print kiya hai  
    printf("address stored in b     : %p\n", b);// yaha pe a ka address store kiya hai 
    printf("value of *b (value of a): %d\n", *b);//yaha par pointer se a ki value print ki hai 

    return 0;
}
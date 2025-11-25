#include<stdio.h>
int main () 
{
    int a = 50;
    int *s = &a;

    printf("address of a:-%p\n",&a);//a ka address print hoga 
    printf("value of A:-%d\n",a);//a ki value print hogi 
    printf("pointer address:-%p\n",&s);//pointer ka address print hoga 
    printf("value of pointer:-%p\n",s);//pointer S ke andar store A ka address print hoga
    return 0;
}
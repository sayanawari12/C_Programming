#include<stdio.h>
int main () 
{
    int a = 5;
    int b = 10;
    int *p =&a;
    int *q =&b;

    *p = 100;//a ki value cange krke 100 ki hai 
    *q = 200;//b ki value change krke 200 ki hai

    printf("%d\n%p\n",a,&a);//%p se address print hota hai 
    printf("%d\n%p",b,&b);//%d seinteger value print hoti hai 

    return 0;
}
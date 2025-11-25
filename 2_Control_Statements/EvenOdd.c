#include<stdio.h>
int main () {
    int num;
    printf(" enter the number ");
    scanf("%d",&num);
    if (num % 2==0) 
    {
        printf("%d, this is the even number ",num);

    }
    else
    {
        printf("%d, this is odd number ",num);
    }
    return 0;
}
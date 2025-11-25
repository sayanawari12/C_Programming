#include<stdio.h>
int main()
{
    int first = 0, second = 1, next, num;

    printf("Enter how many numbers you want in Fibonacci series: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
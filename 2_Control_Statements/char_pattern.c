#include <stdio.h>

int main() 
{
    char start, end;

    printf("Enter start and end character (example: a c): ");
    scanf(" %c %c", &start, &end);

    for (char i = start; i <= end; i++) 
    {
        for (char j = start; j <= i; j++) 
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}

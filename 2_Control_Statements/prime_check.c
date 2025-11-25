#include<stdio.h>
int main ()
{
    int a;
    printf("enter any one number:-");
    scanf("%d",&a);

    int i;
    int flag = 1;  

    if(a <= 1)
        flag = 0;  

    for(i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            flag = 0;  
            break;
        }
    }

    if(flag == 1)
    {
        printf("%d is a prime number", a);
    }
    else
    {
        printf("%d is not a prime number", a);
    }

    return 0;
}

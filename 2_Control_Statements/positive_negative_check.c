#include<stdio.h>
int main () 
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (n>0)
    {
        printf(" this is positive number\n ");
    }
    else if (n<0) 
    {
        printf(" this is negative number\n ");
    }
    else 
    {
        printf(" this is 0 \n");
    }
}
#include<stdio.h>
int main ()
{
    int arr[]={10,20,40,50,80};
    int sum = 0;

    for(int i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }

    printf("addition is:%d",sum);

    return 0;
}
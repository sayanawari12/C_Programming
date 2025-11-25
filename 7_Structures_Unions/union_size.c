#include<stdio.h>
union Data 
{
    int s;
    float a;
    char f[20];

};
int main ()
{
    union Data data;
    printf("memory occupied by union:-%d",sizeof(data));

}


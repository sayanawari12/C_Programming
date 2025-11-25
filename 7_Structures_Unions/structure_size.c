#include<stdio.h>
struct my_struct
{
    int s;
    float a;
    char f[20];

};
int main ()
{
    struct my_struct sayan;
    printf("memory occupied by struct:-%d",sizeof(sayan));

}


#include<stdio.h>
#include<string.h>

union data
{
    int i;
    float f;
    double d;
    char str[50];
};

int main()
{
    union data data;

    data.i = 10;
    printf("%d\n", data.i);

    data.f = 10.10;
    printf("%f\n", data.f);

    strcpy(data.str, "c");
    printf("%s\n", data.str);

    data.d = 55.55;
    printf("%lf\n", data.d);

    return 0;
}

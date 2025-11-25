#include<stdio.h>
int add (int num1)
{ 
    return num1 + 5;
}
int mul (int num1)
{ 
    return num1 * 7;
}
int sub (int num1)
{ 
    return num1 - 3;
}
int main ()
{ 
    printf("addition is %d\n",add(4));
    printf("mltiplication is %d\n",mul(4));
    printf("subtraction is %d\n",sub(4));
    return 0;
}
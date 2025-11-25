#include<stdio.h>
int main ()
{ 
    int  a=10;
    float b=10.3;
    char c = 'z';
    
    int *ptr_a = &a;
    float *ptr_b = &b;
    char *ptr_c = &c;

    printf("size of int pointer:-%lu\n",sizeof(ptr_a));
     printf("size of float pointer:-%lu\n",sizeof(ptr_b));
      printf("size of char pointer:-%lu\n",sizeof(ptr_c));

      return 0;

}
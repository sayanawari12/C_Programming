#include<stdio.h>
int main() {
    int choice ,a ,b;
    printf(" 1 addition:\n");
    printf(" 2 subtraction:\n");
    printf(" 3 multiplication:\n");
    printf(" 4 division:\n");
    printf("enter your choice:\n");
    scanf("%d",&choice);
    printf("enter your a and b value:\n");
    scanf("%d %d",&a,&b);
    switch(choice) {
        case 1:
            printf("addition is :%d\n",a+b);
            break;
        case 2:
            printf("subtraction is :%d\n",a-b);
            break;
        case 3:
            printf("multiplication is :%d\n",a*b);
            break;
        case 4:
            printf("division is :%d\n",a/b);
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}
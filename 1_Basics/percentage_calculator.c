#include<stdio.h>
int main () 
{
    float sub1,sub2,sub3,sub4,sub5,sub6,percentage;
    printf(" enter your marks ");
    scanf("%f%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
    percentage = (sub1+sub2+sub3+sub4+sub5+sub6)/6;
     printf(" this is your percent:%.2f%%\n", percentage);

    return 0;

}
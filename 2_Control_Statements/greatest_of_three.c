#include<stdio.h>
int main () 
{
    int a,b,c;
    printf("enter the number:-");
    scanf("%d%d%d",&a,&b,&c);

   if(a == b && b == c)
   {
    printf("all numbers are equal");
   }
    else if(a >=b && a >=c)
    {
        printf("%d A is the gretest number",a);
    }
    else if (b >=a && b >=c)
    {
        printf("%d B is the gretest number",b);
    }
    else
    {
        printf("%d C is the gretest number",c);
    }
    return 0;
}
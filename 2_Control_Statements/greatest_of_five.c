#include<stdio.h>
int main () 
{
    int a,b,c,d,e;
    printf("enter any five number");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a>=b && a>=c && a>=d && a>=e)
    { 
        printf("%d,A is a gretest number");
    }
    else if (b>=a && b>=c && b>=d && b>=e)
    { 
        printf("%d,B is a gretest number");
    }
    else if (c>=a && c>=b && c>=d && c>=e)
    { 
        printf("%d,C is the gretest nmber");
    }
    else if (d>=a && d>=b && d>=c && d>=e)
    { 
        printf("%d,D is the gretest number");
    }
    else 
    {
        printf("%d,E is the gretest number");
    }
    return 0;
}
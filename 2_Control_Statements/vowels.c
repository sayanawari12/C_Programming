#include<stdio.h>
int main () 
{
    char s;
    printf(" enter any one charector ");
    scanf("%c",&s);
    if(s=='a'|| s=='A'|| s=='e'|| s=='E' || s=='i'|| s== 'I' || s=='o' || s=='O'
        || s=='u' || s=='U' )
    {
        printf(" this is %c vowels ",s);
    }
else 
{
    printf(" this is %c consonants",s);
}
return 0;
}
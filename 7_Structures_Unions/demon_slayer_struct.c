#include <stdio.h>
#include <string.h>
int main()
{
    struct slayer
    {
        char name[50];
        char breathing_style[50];
        int forms;
        int age;
        int rank;
    };
    {
        struct slayer muichiro;
        strcpy(muichiro.name, "tokito muichiro");
        strcpy(muichiro.breathing_style, "mist breathing");
        muichiro.forms = 7;
        muichiro.age = 14;
        muichiro.rank = 4;

        printf("name:%s\n", muichiro.name);
        printf("Breathing Style: %s\n", muichiro.breathing_style);
        printf("Forms: %d\n", muichiro.forms);
        printf("Age: %d\n", muichiro.age);
        printf("Rank: %d\n", muichiro.rank);
    }

    {
        struct slayer sanemi;
        strcpy(sanemi.name, "Sanemi Shinazugawa");
        strcpy(sanemi.breathing_style, "Wind breathing");
        sanemi.forms = 9;
        sanemi.age = 21;
        sanemi.rank = 2;

        printf("\nname:%s\n", sanemi.name);
        printf("breathing Style;%s\n", sanemi.breathing_style);
        printf("forms:%d\n", sanemi.forms);
        printf("Age:%d\n", sanemi.age);
        printf("Rank:%d\n", sanemi.rank);
    }

    return 0;
}
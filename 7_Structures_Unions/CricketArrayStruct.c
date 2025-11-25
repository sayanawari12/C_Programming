#include<stdio.h>
#include<string.h>
typedef struct cricket
{
    char name[20];
    int age;
    int NoOfMatch;
    float avarage;
}cricket;

int main ()
{
    cricket arr[2];
    strcpy(arr[0].name,"virat");
    arr[0].age=35;
    arr[0].NoOfMatch=2;
    arr[0].avarage = 30.50;

    scanf("%s",arr[0].name);
    // printf("name is:%s",arr[0].name);
    scanf("%d",arr[0].age);
    // printf("Age is:%d",arr[0].age);
    scanf("%d",arr[0].NoOfMatch);
    // printf("No of matches:-%d",arr[0].NoOfMatch);
    scanf("%d",arr[0].avarage);
     //printf("avarage is:-%d",arr[0].avarage);

    for(int i=0; i<arr;i++)
    {
        printf("ex:-",arr[i]);
    }

    return 0;

}
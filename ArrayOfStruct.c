#include <stdio.h>
#include <string.h>

typedef struct student 
{
    char name[50];
    int Id;
    int RollNo;
    int Age;
    
} student;

int main ()
{
    student arr[10];

    strcpy(arr[0].name,"sayan");
    arr[0].Id = 10;
    arr[0].RollNo = 101;
    arr[0].Age = 19;

    strcpy(arr[1].name,"adnan");
    arr[1].Id = 11;
    arr[1].RollNo = 102;
    arr[1].Age = 18;

    strcpy(arr[2].name,"falguni");
    arr[2].Id = 12;
    arr[2].RollNo = 103;
    arr[2].Age = 19;

    strcpy(arr[3].name,"ketki");
    arr[3].Id = 13;
    arr[3].RollNo = 104;
    arr[3].Age = 19;

    strcpy(arr[4].name,"shifa");
    arr[4].Id = 14;
    arr[4].RollNo = 105;
    arr[4].Age = 18;

    strcpy(arr[5].name,"anurag");
    arr[5].Id = 15;
    arr[5].RollNo = 106;
    arr[5].Age = 20;

    for(int i = 0; i <= 5; i++)
    {
        printf("\nStudent Name: %s\n", arr[i].name);
        printf("Student Id: %d\n", arr[i].Id);
        printf("Student Roll No: %d\n", arr[i].RollNo);
        printf("Student Age: %d\n", arr[i].Age);
    }
    
    return 0;
}

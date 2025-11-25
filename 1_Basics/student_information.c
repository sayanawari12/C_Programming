#include<stdio.h>

int main()
{
    int studentId;
    char studentFullName[100];
    int studentAge;
    double studentContactNumber;
    double studentAadharNumber;

    printf("******Before Student Info******\n");

    printf("Enter student ID: ");
    scanf("%d", &studentId);

    getchar(); 

    printf("Enter student Fullname: ");
    scanf("%[^\n]", studentFullName);

    printf("Enter student Age: ");
    scanf("%d", &studentAge);

    printf("Enter student Contact Number: ");
    scanf("%lf", &studentContactNumber);

    printf("Enter student Aadhar Number: ");
    scanf("%lf", &studentAadharNumber);

    printf("\n******After Student Info******\n");
    printf("Student ID: %d\n", studentId);
    printf("Full Name: %s\n", studentFullName);
    printf("Age: %d\n", studentAge);
    printf("Contact Number: %.0lf\n", studentContactNumber);
    printf("Aadhar Number: %.0lf\n", studentAadharNumber);

    return 0;
}

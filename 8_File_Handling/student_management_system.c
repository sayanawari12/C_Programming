#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function Declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

FILE *fp;

int main() {
    int choice;

    while (1) {
        printf("\n-------------------------------------\n");
        printf("| STUDENT MANAGEMENT SYSTEM (C)     |\n");
        printf("-------------------------------------\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Add Student
void addStudent() {
    struct Student s;
    fp = fopen("students.dat", "ab");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    getchar();  // Clear input buffer
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; // Remove newline
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Student added successfully!\n");
}

// Display All Students
void displayStudents() {
    struct Student s;
    fp = fopen("students.dat", "rb");
    if (!fp) {
        printf("No data found!\n");
        return;
    }
    printf("\nRoll\tName\t\tMarks\n");
    printf("---------------------------------\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("%d\t%-15s\t%.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
}

// Search Student
void searchStudent() {
    struct Student s;
    int roll, found = 0;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    fp = fopen("students.dat", "rb");
    if (!fp) {
        printf("No data found!\n");
        return;
    }
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Record Found!\n");
            printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }
    fclose(fp);
    if (!found) printf("No student found with Roll No %d\n", roll);
}

// Update Student
void updateStudent() {
    struct Student s;
    int roll, found = 0;
    FILE *temp;

    printf("Enter Roll No to update: ");
    scanf("%d", &roll);

    fp = fopen("students.dat", "rb");
    temp = fopen("temp.dat", "wb");

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Enter New Name: ");
            getchar();
            fgets(s.name, sizeof(s.name), stdin);
            s.name[strcspn(s.name, "\n")] = 0;
            printf("Enter New Marks: ");
            scanf("%f", &s.marks);
            found = 1;
        }
        fwrite(&s, sizeof(s), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found) printf("Student updated successfully!\n");
    else printf("Student with Roll No %d not found.\n", roll);
}

// Delete Student
void deleteStudent() {
    struct Student s;
    int roll, found = 0;
    FILE *temp;

    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    fp = fopen("students.dat", "rb");
    temp = fopen("temp.dat", "wb");

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            found = 1;
            continue; // Skip writing this record to temp file
        }
        fwrite(&s, sizeof(s), 1, temp);
    }
    fclose(fp);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found) printf("Student deleted successfully!\n");
    else printf("Student with Roll No %d not found.\n", roll);
}

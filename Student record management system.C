#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Structure to store student information
struct Student {
    int rollNumber;
    char name[100];
    float marks;
};

// Function to view all student records
void viewStudents(struct Student students[], int studentCount) {
    if (studentCount == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("----------------------------\n");
    }
}

// Function to add a student record
void addStudent(struct Student students[], int *studentCount) {
    if (*studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students, limit reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter Roll Number: ");
    scanf("%d", &newStudent.rollNumber);

    // To clear the buffer before taking string input
    getchar();

    printf("Enter Name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; // Remove newline character

    printf("Enter Marks: ");
    scanf("%f", &newStudent.marks);

    // Add new student to the array
    students[*studentCount] = newStudent;
    (*studentCount)++;
    printf("Student record added successfully.\n");
}

// Function to edit a student record
void editStudent(struct Student students[], int studentCount) {
    int rollNumber, found = 0;
    
    printf("Enter Roll Number of the student to edit: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;

            printf("Editing student with Roll Number: %d\n", students[i].rollNumber);

            getchar(); // To clear the buffer before taking string input
            printf("Enter new Name: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character

            printf("Enter new Marks: ");
            scanf("%f", &students[i].marks);
            printf("Student record updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("No student found with Roll Number: %d\n", rollNumber);
    }
}

// Function to delete a student record
void deleteStudent(struct Student students[], int *studentCount) {
    int rollNumber, found = 0;

    printf("Enter Roll Number of the student to delete: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < *studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;

            // Shift the records after the deleted student to fill the gap
            for (int j = i; j < *studentCount - 1; j++) {
                students[j] = students[j + 1];
            }

            (*studentCount)--; // Decrease the student count
            printf("Student record with Roll Number %d deleted successfully.\n", rollNumber);
            break;
        }
    }

    if (!found) {
        printf("No student found with Roll Number: %d\n", rollNumber);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    while (1) {
        printf("\nStudent Record Management System\n");
        printf("1. View all student records\n");
        printf("2. Add a new student\n");
        printf("3. Edit student record\n");
        printf("4. Delete student record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewStudents(students, studentCount);
                break;
            case 2:
                addStudent(students, &studentCount);
                break;
            case 3:
                editStudent(students, studentCount);
                break;
            case 4:
                deleteStudent(students, &studentCount);
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

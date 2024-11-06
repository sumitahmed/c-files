#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 20

// Structure to store student details
typedef struct {
    char name[MAX_NAME_LENGTH + 1];
    int rollNo;
    float CGPA;
} STUDENT;

// Function to search for a student by name
STUDENT searchByName(STUDENT students[], int n, const char* name) {
    STUDENT notFound = {"", -1, -1.0}; // Special structure for not found
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return students[i];
        }
    }
    return notFound;
}

// Function to search for a student by roll no
STUDENT searchByRollNo(STUDENT students[], int n, int rollNo) {
    STUDENT notFound = {"", -1, -1.0}; // Special structure for not found
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            return students[i];
        }
    }
    return notFound;
}

// Function to print details of students with CGPA > x
void printStudentsWithCGPA(STUDENT students[], int n, float x) {
    printf("Students with CGPA > %.2f:\n", x);
    for (int i = 0; i < n; i++) {
        if (students[i].CGPA > x) {
            printf("Name: %s, Roll No: %d, CGPA: %.2f\n", students[i].name, students[i].rollNo, students[i].CGPA);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of students (max 100): ");
    scanf("%d", &n);
    STUDENT students[MAX_STUDENTS];

    // Reading details of n students
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("CGPA: ");
        scanf("%f", &students[i].CGPA);
    }

    // Example usage of functions
    char searchName[MAX_NAME_LENGTH + 1];
    int searchRollNo;
    float x;
    printf("Enter name to search: ");
    scanf("%s", searchName);
    STUDENT foundByName = searchByName(students, n, searchName);
    if (strcmp(foundByName.name, "") != 0) {
        printf("Student found by name: Name: %s, Roll No: %d, CGPA: %.2f\n", foundByName.name, foundByName.rollNo, foundByName.CGPA);
    } else {
        printf("Student not found by name.\n");
    }

    printf("Enter roll no to search: ");
    scanf("%d", &searchRollNo);
    STUDENT foundByRollNo = searchByRollNo(students, n, searchRollNo);
    if (strcmp(foundByRollNo.name, "") != 0) {
        printf("Student found by roll no: Name: %s, Roll No: %d, CGPA: %.2f\n", foundByRollNo.name, foundByRollNo.rollNo, foundByRollNo.CGPA);
    } else {
        printf("Student not found by roll no.\n");
    }

    printf("Enter CGPA threshold: ");
    scanf("%f", &x);
    printStudentsWithCGPA(students, n, x);

    return 0;
}

#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH  50

int main() {
    char names[MAX_STUDENTS][NAME_LENGTH];   // 2D array for names
    int marks[MAX_STUDENTS];                  // array for exam marks
    char grades[MAX_STUDENTS];                // array for letter grades

    int num_students, i;

    // 1. Get number of students
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &num_students);

    if (num_students > MAX_STUDENTS || num_students <= 0) {
        printf("Invalid number of students!\n");
        return 1;
    }

    // 2. Input data for each student
    for (i = 0; i < num_students; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", names[i]);           // reads until space (simple version)

        printf("Enter exam mark (0-100) for %s: ", names[i]);
        scanf("%d", &marks[i]);

        // Basic validation
        while (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid! Enter mark again (0-100): ");
            scanf("%d", &marks[i]);
        }

        // 3. Calculate grade and store it
        if (marks[i] >= 80) {
            grades[i] = 'A';
        }
        else if (marks[i] >= 75) {
            grades[i] = 'B';
        }
        else if (marks[i] >= 70) {
            grades[i] = 'C';
        }
        else if (marks[i] >= 65) {
            grades[i] = 'D';
        }
        else if (marks[i] >= 60) {
            grades[i] = 'E';
        }
        else {
            grades[i] = 'F';
        }
    }

    // 4. Display all stored data
    printf("\n====================================\n");
    printf("       STUDENT GRADES REPORT\n");
    printf("====================================\n");
    printf("No.   Name\t\tMark   Grade\n");
    printf("------------------------------------\n");

    for (i = 0; i < num_students; i++) {
        printf("%-4d  %-20s  %3d    %c\n",
               i + 1, names[i], marks[i], grades[i]);
    }

    printf("====================================\n");

    return 0;
}

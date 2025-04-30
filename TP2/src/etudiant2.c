#include <stdio.h>
#include <string.h>

#define STUDENT_COUNT 5
#define SIZE 100

struct Student {
    char lastName[SIZE];
    char firstName[SIZE];
    char address[SIZE];
    float grade1;
    float grade2;
};

int main() {
    struct Student students[STUDENT_COUNT];

    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("Student %d:\n", i + 1);

        printf("Last name: ");
        fgets(students[i].lastName, SIZE, stdin);
        students[i].lastName[strcspn(students[i].lastName, "\n")] = '\0';

        printf("First name: ");
        fgets(students[i].firstName, SIZE, stdin);
        students[i].firstName[strcspn(students[i].firstName, "\n")] = '\0';

        printf("Address: ");
        fgets(students[i].address, SIZE, stdin);
        students[i].address[strcspn(students[i].address, "\n")] = '\0';

        printf("Grade in C Programming: ");
        scanf("%f", &students[i].grade1);

        printf("Grade in Operating Systems: ");
        scanf("%f", &students[i].grade2);

        getchar();
        printf("\n");
    }

    printf("\n--- Student Data ---\n\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("Student %d:\n", i + 1);
        printf("Last name : %s\n", students[i].lastName);
        printf("First name: %s\n", students[i].firstName);
        printf("Address   : %s\n", students[i].address);
        printf("Grade 1   : %.2f\n", students[i].grade1);
        printf("Grade 2   : %.2f\n\n", students[i].grade2);
    }

    return 0;
}

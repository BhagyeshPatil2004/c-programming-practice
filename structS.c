#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];
    int i, maxMarks = -1, maxIndex = -1;

    printf("Enter information for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);

        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            maxIndex = i;
        }
    }

    printf("\nStudent Information:\n");
    printf("-------------------------------------------------------\n");
    printf("| Roll No |      Name      |     Marks      |\n");
    printf("-------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("| %7d | %-14s | %10d     |\n", students[i].rollNo, students[i].name, students[i].marks);
    }

    printf("-------------------------------------------------------\n");

    printf("Student with top marks:\n");
    printf("Roll Number: %d\n", students[maxIndex].rollNo);
    printf("Name: %s\n", students[maxIndex].name);
    printf("Marks: %d\n", students[maxIndex].marks);

    return 0;

}

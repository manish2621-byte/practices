#include <stdio.h>

int main() {
    int marks;
    int grade;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    // Decide grade category
    if (marks > 90)
        grade = 1;
    else if (marks > 75)
        grade = 2;
    else if (marks > 50)
        grade = 3;
    else
        grade = 4;

    // Switch case for grade output
    switch (grade) {
        case 1:
            printf("Grade A\n");
            break;

        case 2:
            printf("Grade B\n");
            break;

        case 3:
            printf("Grade C\n");
            break;

        case 4:
            printf("Grade D\n");
            break;

        default:
            printf("Invalid Marks\n");
    }

    return 0;
}
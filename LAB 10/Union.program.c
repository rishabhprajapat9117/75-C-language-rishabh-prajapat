
#include <stdio.h>

union Student
{
    int roll;
    float marks;
    char grade;
};

int main()
{
    union Student s1;

    s1.roll = 101;
    printf("Roll No: %d\n", s1.roll);

    s1.marks = 85.5;
    printf("Marks: %.2f\n", s1.marks);

    s1.grade = 'A';
    printf("Grade: %c\n", s1.grade);

    return 0;
}

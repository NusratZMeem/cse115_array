#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct Student student1;

    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter student age: ");
    scanf("%d", &student1.age);
    printf("Enter student CGPA: ");
    scanf("%f", &student1.cgpa);

    return 0;
}

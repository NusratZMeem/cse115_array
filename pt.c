#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char gender;
    float height;
    float weight;
};

int main() {
    struct Patient patient1;

    printf("Enter patient ID: ");
    scanf("%d", &patient1.id);

    printf("Enter patient name: ");
    scanf("%s", patient1.name);

    printf("Enter patient age: ");
    scanf("%d", &patient1.age);

    printf("Enter patient gender (M/F): ");
    scanf(" %c", &patient1.gender);

    printf("Enter patient height (in cm): ");
    scanf("%f", &patient1.height);

    printf("Enter patient weight (in kg): ");
    scanf("%f", &patient1.weight);

    printf("\nPatient ID: %d\n", patient1.id);
    printf("Name: %s\n", patient1.name);
    printf("Age: %d\n", patient1.age);
    printf("Gender: %c\n", patient1.gender);
    printf("Height: %.2f cm\n", patient1.height);
    printf("Weight: %.2f kg\n", patient1.weight);

    return 0;
}

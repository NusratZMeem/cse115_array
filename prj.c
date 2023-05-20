#include <stdio.h>
#define MAX_PLAYERS 11

struct Player {
    char name[50];
    int age;
    char role[20];
};

int main() {
    struct Player team[MAX_PLAYERS];
    int i;

    printf("Enter details of the cricket team:\n");
    for (i = 0; i < MAX_PLAYERS; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", team[i].name);
        printf("Age: ");
        scanf("%d", &team[i].age);
        printf("Role: ");
        scanf("%s", team[i].role);
    }

    printf("\nCricket Team:\n");
    for (i = 0; i < MAX_PLAYERS; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", team[i].name);
        printf("Age: %d\n", team[i].age);
        printf("Role: %s\n", team[i].role);
    }

    return 0;
}



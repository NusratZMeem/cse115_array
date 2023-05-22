#include <stdio.h>
#define MAX_PLAYERS 11

struct Player {
    char name[50];
    int age;
    char role[20];
    int matchesPlayed;
    int totalRuns;
    float battingAverage;
    int wicketsTaken;
    float bowlingAverage;
    int jerseyNumber;
    int bestScore;
    float economy;

};

int main() {
    struct Player team[MAX_PLAYERS];
    int i;

    printf("Enter details of the cricket team:\n");
    for (i = 0; i < MAX_PLAYERS; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: ");
        gets(team[i].name);
        printf("Age: ");
        scanf("%d", &team[i].age);
        getchar();
        scanf("%s", team[i].role);
        printf("Matches Played: ");
        scanf("%d", &team[i].matchesPlayed);
        printf("Total Runs: ");
        scanf("%d", &team[i].totalRuns);
        printf("Batting Average: ");
        scanf("%f", &team[i].battingAverage);
        printf("Wickets Taken: ");
        scanf("%d", &team[i].wicketsTaken);
        printf("Bowling Average: ");
        scanf("%f", &team[i].bowlingAverage);
        printf("Jersey Number: ");
        scanf("%d", &team[i].jerseyNumber);
        printf("Best Score: ");
        scanf("%d", &team[i].bestScore);
        printf("Economy: ");
        scanf("%f", &team[i].economy);

        getchar();
    }

    printf("\nCricket Team:\n");
    for (i = 0; i < MAX_PLAYERS; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", team[i].name);
        printf("Age: %d\n", team[i].age);
        printf("Role: %s\n", team[i].role);
        printf("Matches Played: %d\n", team[i].matchesPlayed);
        printf("Total Runs: %d\n", team[i].totalRuns);
        printf("Batting Average: %.2f\n", team[i].battingAverage);
        printf("Wickets Taken: %d\n", team[i].wicketsTaken);
        printf("Bowling Average: %.2f\n", team[i].bowlingAverage);
        printf("Jersey Number: %d\n", team[i].jerseyNumber);
        printf("Best Score: %d\n", team[i].bestScore);
        printf("Economy: %.2f\n", team[i].economy);

    }

    return 0;
}

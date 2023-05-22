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
void add_players()
{
    struct Player team[100];
    int i;
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


}
void print_players()
{
    struct Player team[100];
    int i;
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


}

int main() {
    struct Player team[MAX_PLAYERS];
    int i;
    add_players();
    print_players();



    }

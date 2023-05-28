#include <stdio.h>
#include <string.h>
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

void add_players(struct Player team[], int numPlayers)
{
    int i;
    for (i = 0; i < numPlayers; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: ");
        gets(team[i].name);
        printf("Age: ");
        scanf("%d", &team[i].age);
        getchar();
        printf("Role: ");
        gets(team[i].role);
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

void print_players(struct Player team[], int numPlayers)
{
    int i;
    for (i = 0; i < numPlayers; i++) {
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
}

void delete_player(struct Player team[], int numPlayers) {
    int i, deleteIndex;
    char playerToDelete[50];

    printf("Enter the name of the player you want to delete: ");
    scanf("%s", playerToDelete);

    for (i = 0; i < numPlayers; i++) {
        if (strcmp(team[i].name, playerToDelete) == 0) {
            deleteIndex = i;
            break;
        }
    }

    if (i == numPlayers) {
        printf("Player not found.\n");
        return;
    }

    for (i = deleteIndex; i < numPlayers - 1; i++) {
        team[i] = team[i + 1];
    }
}
void search_player(struct Player team[], int numPlayers) {
    char playerToSearch[50];
    int i;

    printf("Enter the name of the player you want to search: ");
    scanf("%s", playerToSearch);

    for (i = 0; i < numPlayers; i++) {
        if (strcmp(team[i].name, playerToSearch) == 0) {
            printf("\nPlayer found:\n");
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
            return;
        }
    }

    printf("Player not found.\n");
}

void search_players(struct Player team[], int numPlayers) {
    char playerToSearch[50];
    int i;

    printf("Enter the name of the player you want to search: ");
    scanf("%s", playerToSearch);

    for (i = 0; i < numPlayers; i++) {
        if (strcmp(team[i].name, playerToSearch) == 0) {
            printf("\nPlayer found:\n");
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
            return;
        }
    }

    printf("Player not found.\n");
}

void save_players(struct Player team[], int numPlayers) {
    char filename[100];
    printf("Enter the filename to save the player data: ");
    scanf("%s", filename);

    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Unable to create file.\n");
        return;
    }

    int i;
    for (i = 0; i < numPlayers; i++) {
        fprintf(file, "Player %d:\n", i + 1);
        fprintf(file, "Name: %s\n", team[i].name);
        fprintf(file, "Age: %d\n", team[i].age);
        fprintf(file, "Role: %s\n", team[i].role);
        fprintf(file, "Matches Played: %d\n", team[i].matchesPlayed);
        fprintf(file, "Total Runs: %d\n", team[i].totalRuns);
        fprintf(file, "Batting Average: %.2f\n", team[i].battingAverage);
        fprintf(file, "Wickets Taken: %d\n", team[i].wicketsTaken);
        fprintf(file, "Bowling Average: %.2f\n", team[i].bowlingAverage);
        fprintf(file, "Jersey Number: %d\n", team[i].jerseyNumber);
        fprintf(file, "Best Score: %d\n", team[i].bestScore);
        fprintf(file, "Economy: %.2f\n", team[i].economy);
    }

    fclose(file);
    printf("Player data saved to %s successfully.\n", filename);
}
int main() {
    struct Player team[MAX_PLAYERS];
    int numPlayers;
    int i;

    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);
    getchar();

    add_players(team, numPlayers);
    printf("\n--- Players Information ---\n");
    print_players(team, numPlayers);

    delete_player(team, numPlayers);
    numPlayers--;

    printf("\n--- Updated Players Information ---\n");
    print_players(team, numPlayers);

    search_players(team, numPlayers);

    save_players(team, numPlayers);

    return 0;
}

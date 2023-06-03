#include <stdio.h>
#include <string.h>
#define MAX_PLAYERS 11

typedef struct {
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
} Player;

void addPlayer(Player team[], int *numPlayers) {
    if (*numPlayers >= MAX_PLAYERS) {
        printf("Team is full. Cannot add more players.\n");
        return;
    }

    Player newPlayer;

    printf("\nPlayer %d:\n", *numPlayers + 1);
    printf("Name: ");
    scanf("%s", newPlayer.name);
    printf("Age: ");
    scanf("%d", &newPlayer.age);
    printf("Role: ");
    scanf("%s", newPlayer.role);
    printf("Matches Played: ");
    scanf("%d", &newPlayer.matchesPlayed);
    printf("Total Runs: ");
    scanf("%d", &newPlayer.totalRuns);
    printf("Batting Average: ");
    scanf("%f", &newPlayer.battingAverage);
    printf("Wickets Taken: ");
    scanf("%d", &newPlayer.wicketsTaken);
    printf("Bowling Average: ");
    scanf("%f", &newPlayer.bowlingAverage);
    printf("Jersey Number: ");
    scanf("%d", &newPlayer.jerseyNumber);
    printf("Best Score: ");
    scanf("%d", &newPlayer.bestScore);
    printf("Economy: ");
    scanf("%f", &newPlayer.economy);

    team[*numPlayers] = newPlayer;
    (*numPlayers)++;

    printf("Player added successfully!\n");
}

void deletePlayer(Player team[], int *numPlayers) {
    if (*numPlayers == 0) {
        printf("No players in the team. Cannot delete.\n");
        return;
    }

    char name[50];
    printf("Enter the name of the player to delete: ");
    scanf("%s", name);

    int index = -1;
    for (int i = 0; i < *numPlayers; i++) {
        if (strcmp(team[i].name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Player not found.\n");
    } else {
        for (int i = index; i < *numPlayers - 1; i++) {
            team[i] = team[i + 1];
        }
        (*numPlayers)--;
        printf("Player deleted successfully.\n");
    }
}

void searchPlayer(Player team[], int numPlayers) {
    if (numPlayers == 0) {
        printf("No players in the team.\n");
        return;
    }

    char name[50];
    printf("Enter the name of the player to search: ");
    scanf("%s", name);

    int found = 0;
    for (int i = 0; i < numPlayers; i++) {
        if (strcmp(team[i].name, name) == 0) {
            printf("Player found:\n");
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
            printf("--------------------\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Player not found.\n");
    }
}

void printPlayers(Player team[], int numPlayers) {
    if (numPlayers == 0) {
        printf("No players in the team.\n");
        return;
    }

    printf("--- Current Team ---\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Player %d:\n", i + 1);
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
        printf("--------------------\n");
    }
}

void savePlayers(Player team[], int numPlayers) {
    if (numPlayers == 0) {
        printf("No players in the team. Nothing to save.\n");
        return;
    }

    char filename[50];
    printf("Enter the filename to save the player data: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return;
    }

    for (int i = 0; i < numPlayers; i++) {
        fprintf(file, "%s,%d,%s,%d,%d,%.2f,%d,%.2f,%d,%d,%.2f\n", team[i].name, team[i].age, team[i].role,
                team[i].matchesPlayed, team[i].totalRuns, team[i].battingAverage, team[i].wicketsTaken,
                team[i].bowlingAverage, team[i].jerseyNumber, team[i].bestScore, team[i].economy);
    }

    fclose(file);
    printf("Player data saved to %s successfully.\n", filename);
}

void readPlayers(Player team[], int *numPlayers) {
    char filename[50];
    printf("Enter the filename to read the player data from: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return;
    }

    *numPlayers = 0;
    while (fscanf(file, "%[^,],%d,%[^,],%d,%d,%f,%d,%f,%d,%d,%f\n", team[*numPlayers].name, &team[*numPlayers].age,
                  team[*numPlayers].role, &team[*numPlayers].matchesPlayed, &team[*numPlayers].totalRuns,
                  &team[*numPlayers].battingAverage, &team[*numPlayers].wicketsTaken, &team[*numPlayers].bowlingAverage,
                  &team[*numPlayers].jerseyNumber, &team[*numPlayers].bestScore, &team[*numPlayers].economy) != EOF) {
        printf("Player %d:\n", *numPlayers + 1);
        printf("Name: %s\n", team[*numPlayers].name);
        printf("Age: %d\n", team[*numPlayers].age);
        printf("Role: %s\n", team[*numPlayers].role);
        printf("Matches Played: %d\n", team[*numPlayers].matchesPlayed);
        printf("Total Runs: %d\n", team[*numPlayers].totalRuns);
        printf("Batting Average: %.2f\n", team[*numPlayers].battingAverage);
        printf("Wickets Taken: %d\n", team[*numPlayers].wicketsTaken);
        printf("Bowling Average: %.2f\n", team[*numPlayers].bowlingAverage);
        printf("Jersey Number: %d\n", team[*numPlayers].jerseyNumber);
        printf("Best Score: %d\n", team[*numPlayers].bestScore);
        printf("Economy: %.2f\n", team[*numPlayers].economy);
        printf("--------------------\n");
        (*numPlayers)++;
    }

    fclose(file);
    printf("Player data loaded from %s successfully.\n", filename);
}

int main() {
    Player team[MAX_PLAYERS];
    int numPlayers = 0;
    int choice = 0;

    while (choice != 7) {
        printf("\n_____Cricket Team Management_____\n");
        printf("1. Add Player\n");
        printf("2. Delete Player\n");
        printf("3. Search Player\n");
        printf("4. Print Players\n");
        printf("5. Save Players\n");
        printf("6. Read Players\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline character

        switch (choice) {
            case 1:
                addPlayer(team, &numPlayers);
                break;
            case 2:
                deletePlayer(team, &numPlayers);
                break;
            case 3:
                searchPlayer(team, numPlayers);
                break;
            case 4:
                printPlayers(team, numPlayers);
                break;
            case 5:
                savePlayers(team, numPlayers);
                break;
            case 6:
                readPlayers(team, &numPlayers);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}



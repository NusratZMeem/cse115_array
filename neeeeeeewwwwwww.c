
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
        fgets(team[i].name, sizeof(team[i].name), stdin);
        team[i].name[strcspn(team[i].name, "\n")] = '\0';  // Remove trailing newline character
        printf("Age: ");
        scanf("%d", &team[i].age);
        getchar();
        printf("Role: ");
        fgets(team[i].role, sizeof(team[i].role), stdin);
        team[i].role[strcspn(team[i].role, "\n")] = '\0';
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

void delete_player(struct Player team[], int *numPlayers) {
    int i, deleteIndex;
    char playerToDelete[50];

    printf("Enter the name of the player you want to delete: ");
    scanf("%s", playerToDelete);

    for (i = 0; i < *numPlayers; i++) {
        if (strcmp(team[i].name, playerToDelete) == 0) {
            deleteIndex = i;
            break;
        }
    }

    if (i == *numPlayers) {
        printf("Player not found.\n");
        return;
    }

    for (i = deleteIndex; i < *numPlayers - 1; i++) {
        team[i] = team[i + 1];
    }

       (*numPlayers)--;
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

void read_players(struct Player team[], int *numPlayers) {
    char filename[100];
    printf("Enter the filename to load player data: ");
    scanf("%s", filename);

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file  return");
    }

    int i = 0;
    while (fgets(team[i].name, sizeof(team[i].name), file) != NULL) {
        team[i].name[strcspn(team[i].name, "\n")] = '\0';  // Remove trailing newline character
        fscanf(file, "Age: %d\n", &team[i].age);
        fscanf(file, "Role: %[^\n]\n", team[i].role);
        fscanf(file, "Matches Played: %d\n", &team[i].matchesPlayed);
        fscanf(file, "Total Runs: %d\n", &team[i].totalRuns);
        fscanf(file, "Batting Average: %f\n", &team[i].battingAverage);
        fscanf(file, "Wickets Taken: %d\n", &team[i].wicketsTaken);
        fscanf(file, "Bowling Average: %f\n", &team[i].bowlingAverage);
        fscanf(file, "Jersey Number: %d\n", &team[i].jerseyNumber);
        fscanf(file, "Best Score: %d\n", &team[i].bestScore);
        fscanf(file, "Economy: %f\n", &team[i].economy);

        i++;
        if (i >= MAX_PLAYERS) {
            break;
        }
    }

    *numPlayers = i;

    fclose(file);
    printf("Player data loaded from %s successfully.\n", filename);
}

int main() {
    struct Player team[MAX_PLAYERS];
    int numPlayers;
    int choice;

    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);
    getchar();

    add_players(team, numPlayers);
    printf("\n--- Players Information ---\n");
    print_players(team, numPlayers);

    do {
        printf("\n--- Menu ---\n");
        printf("1. Add a player\n");
        printf("2. Delete a player\n");
        printf("3. Search for a player\n");
        printf("4. Save player\n");
        printf("5. Load player\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                add_players(team, &numPlayers);
                printf("\n--- Updated Players Information ---\n");
                print_players(team, numPlayers);
                break;
            case 2:
                delete_player(team, &numPlayers);
                printf("\n--- Updated Players Information ---\n");
                print_players(team, numPlayers);
                break;
            case 3:
                search_player(team, numPlayers);
                break;
            case 4:
                save_players(team, numPlayers);
                break;
            case 5:
                read_players(team, &numPlayers);
                printf("\n--- Loaded Players Information ---\n");
                print_players(team, numPlayers);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

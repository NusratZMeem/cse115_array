#include <stdio.h>

void print_position(int row, int col) {
    printf("Current Position: [%d][%d]\n", row, col);
}

int main() {
    int row = 0, col = 0;

    // Print the initial position
    printf("Initial Position:\n");
    print_position(row, col);

    int num_moves = 7;
    char direction;

    // Start the loop to take user inputs
    while (num_moves > 0 && (row != 2 || col != 2)) {
        printf("Enter direction (U/D/L/R): ");
        scanf(" %c", &direction);

        switch (direction) {
            case 'U':
                if (row > 0)
                    row--;
                break;
            case 'D':
                if (row < 2)
                    row++;
                break;
            case 'L':
                if (col > 0)
                    col--;
                break;
            case 'R':
                if (col < 2)
                    col++;
                break;
            default:
                printf("Invalid direction! Please enter U, D, L, or R.\n");
                continue;
        }

        num_moves--;

        // Print the current position
        print_position(row, col);
    }

    // Check if the final position has been reached or not
    if (row == 2 && col == 2) {
        printf("Congratulations! You have reached the final position.\n");
    } else {
        printf("Sorry, you could not reach the final position within 7 moves.\n");
    }

    // Print the final position
    printf("Final Position:\n");
    print_position(row, col);

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j, board[4][4] = {0};
    char input;

    int king_row = 4 - 1;
    int king_col = 4 - 1;
    int bomb_row = 1;
    int bomb_col = 2;

    while (king_row != bomb_row || king_col != bomb_col)
    {
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (i == king_row && j == king_col)
                {
                    printf("K");
                }
                else if (i == bomb_row && j == bomb_col)
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
            printf("\n");
        }

        printf("Enter the direction(u/d/l/r): ");
        scanf(" %c", &input);

        switch (input)
        {
        case 'u':
            if (king_row > 0)
            {
                king_row--;
            }
            break;

        case 'd':
            if (king_row < 3)
            {
                king_row++;
            }
            break;

        case 'l':
            if (king_col > 0)
            {
                king_col--;
            }
            break;

        case 'r':
            if (king_col < 3)
            {
                king_col++;
            }
            break;

        default:
            printf("Invalid Input");
        }

        if (king_row == 0 && king_col == 0)
        {
            printf("You Win!!");
            break;
        }
    }

    if (king_row == bomb_row && king_col == bomb_col)
    {
        printf("Game Over!!...Sorry!!");
    }

    return 0;
}

//Write a c program that computes the sum of a specific column (provide by user as input) in a 2D array.
#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0, col;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array elements: \n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter column to sum :");
    scanf("%d", &col);

    for (i = 0; i < rows; i++) {
        sum += arr[i][col - 1];
    }

    printf("Sum of column %d is %d.\n", col, sum);

    return 0;
}

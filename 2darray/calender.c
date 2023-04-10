//printing calender using c in 2d array in c
#include <stdio.h>

int main() {
    int days[6][7]; // 2D array to hold the days in a calendar

    // Fill the array with zeros to start
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++) {
            days[i][j] = 0;
        }
    }

    int numDays, startingDay;

    // Prompt the user to enter the number of days in the month
    printf("Enter the number of days in the month: ");
    scanf("%d", &numDays);

    // Prompt the user to enter the starting day of the month (0-6, Sunday-Saturday)
    printf("Enter the starting day (0=Sunday, 1=Monday, etc.): ");
    scanf("%d", &startingDay);

    // Fill in the days in the calendar
    int day = 1;
    for(int i = 0; i < 6; i++) {
        for(int j = startingDay; j < 7 && day <= numDays; j++) {
            days[i][j] = day;
            day++;
        }
        startingDay = 0; // Reset the starting day after the first row
    }

    // Print the calendar
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++) {
            if(days[i][j] == 0) {
                printf("    ");
            } else {
                printf("%3d ", days[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}


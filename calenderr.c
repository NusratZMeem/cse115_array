#include <stdio.h>

int main() {
    int year, month, day, daysInMonth, weekday;
    int calendar[6][7] = {0};

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter day (1-31): ");
    scanf("%d", &day);


    if (month == 2) {

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }


    weekday = ((day - 1) % 7);


    for (int i = 1; i <= daysInMonth; i++) {
        calendar[i / 7][i % 7 + weekday] = i;
    }


    printf(" Su  Mo  Tu  We  Th  Fr  Sa\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (calendar[i][j] == 0) {
                printf("    ");
            } else {
                printf("%3d ", calendar[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

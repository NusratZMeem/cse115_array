#include <stdio.h>

int main()
{
    int year, month, day, weekday;


    printf("Enter the year: ");
    scanf("%d", &year);


    printf("Enter the month (1-12): ");
    scanf("%d", &month);


    int daysInMonth;
    if (month == 2)
    {

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            daysInMonth = 29;
        }
        else
        {
            daysInMonth = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        daysInMonth = 30;
    }
    else
    {
        daysInMonth = 31;
    }


    weekday = 1;

    printf("==============================\n");
    printf("         %d/%02d Calendar        \n", year, month);
    printf("==============================\n");
    printf("Mon Tue Wed Thu Fri Sat Sun\n");


    for (int i = 1; i < weekday; i++)
    {
        printf("    ");
    }


    for (day = 1; day <= daysInMonth; day++)
    {
        printf("%3d ", day);


        if (weekday % 7 == 0)
        {
            printf("\n");
        }

        weekday++;
    }

    printf("\n");

    return 0;
}

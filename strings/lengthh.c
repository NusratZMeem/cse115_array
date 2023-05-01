//Finding the length of a string without library function:
#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "hello";
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    printf("The length of the string is %d\n", len);
    return 0;
}

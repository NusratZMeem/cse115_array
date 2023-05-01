#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal\n");
    } else if (result < 0) {
        printf("The first string is less than the second\n");
    } else {
        printf("The first string is greater than the second\n");
    }
    return 0;
}


#include <stdio.h>

int compare_strings(char *str1, char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    int result = compare_strings(str1, str2);
    if (result == 0) {
        printf("The strings are equal\n");
    } else if (result < 0) {
        printf("The first string is less than the second\n");
    } else {
        printf("The first string is greater than the second\n");
    }
    return 0;
}


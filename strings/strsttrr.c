#include <stdio.h>

char* find_substring(char *str, char *substr) {
    while (*str) {
        char *p1 = str;
        char *p2 = substr;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        if (!*p2) {
            return str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str[] = "hello world";
    char *substr = "world";
    char *result = find_substring(str, substr);
    if (result) {
        printf("The substring is %s\n", result);
    } else {
        printf("The substring was not found\n");
    }
    return 0;
}

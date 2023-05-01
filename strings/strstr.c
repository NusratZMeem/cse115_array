#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "hello world";
    char *substr = strstr(str, "world");
    printf("The substring is %s\n", substr);
    return 0;
}


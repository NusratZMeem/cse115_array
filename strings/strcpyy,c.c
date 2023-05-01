#include <stdio.h>

void copy_string(char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int main() {
    char str1[] = "hello";
    char str2[6];
    copy_string(str1, str2);
    printf("The copied string is %s\n", str2);
    return 0;
}

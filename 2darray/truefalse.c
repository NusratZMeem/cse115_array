//Write a c function that searches for a character in a string. The function should print true if found,
//otherwise print false.
#include <stdio.h>

void search(char arr[], char key) {
    int i, found = 0;

    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}

int main() {
    char str[100], key;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search for: ");
    scanf("%c", &key);

    search(str, key);

    return 0;
}

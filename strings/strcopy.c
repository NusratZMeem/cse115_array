//Copying one string to another Using string.h:
#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[6];
    strcpy(str2, str1);
    printf("The copied string is %s\n", str2);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "Hello";
   char str2[20] = " world!";

   strcat(str1, str2);

   printf("Concatenated string: %s", str1);

   return 0;
}

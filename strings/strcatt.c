
#include <stdio.h>

void concat(char[], char[]);

int main() {
   char str1[20] = "Hello";
   char str2[20] = " world!";

   concat(str1, str2);

   printf("Concatenated string: %s", str1);

   return 0;
}

void concat(char str1[], char str2[]) {
   int i, j;

   for(i=0; str1[i]!='\0'; i++);
   for(j=0; str2[j]!='\0'; j++, i++) {
      str1[i] = str2[j];
   }
   str1[i] = '\0';
}

//I have three strings, please do the following operations:
//S1 contains "CSE"
//S2 contains "115
//S3 contains "is fun"
//a. Please add S1, S2 and S3 into a new string named S4 without any string.h function
//b. Replace all the vowels in S4 using $
//c. Calculate the new string length using a string.h function ,,,,use c program
//a
#include <stdio.h>

int main() {
    char s1[] = "CSE";
    char s2[] = "115";
    char s3[] = "is fun";
    char s4[100];
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        s4[j] = s1[i];
        i++;
        j++;
    }

    i = 0;
    while (s2[i] != '\0') {
        s4[j] = s2[i];
        i++;
        j++;
    }

    i = 0;
    while (s3[i] != '\0') {
        s4[j] = s3[i];
        i++;
        j++;
    }

    s4[j] = '\0';



    // Replacing vowels in S4 with $
    i = 0;
    while (s4[i] != '\0') {
        if (s4[i] == 'a' || s4[i] == 'e' || s4[i] == 'i' || s4[i] == 'o' || s4[i] == 'u' ||
            s4[i] == 'A' || s4[i] == 'E' || s4[i] == 'I' || s4[i] == 'O' || s4[i] == 'U') {
            s4[i] = '$';
        }
        i++;
    }

    printf(" %s\n", s4);

    return 0;
}


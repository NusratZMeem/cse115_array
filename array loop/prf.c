#include <stdio.h>

void print_primes(int ar[], int n) {
    int i, j, counter;

    printf("\nAll the prime numbers in the array are:");
    for(i = 0; i < n; i++) {
        counter = 0;
        for(j = 2; j < ar[i]; j++) {
            if(ar[i] % j == 0) {
                counter = 1;
            }
        }
        if(counter == 0 && ar[i] > 1) {
            printf(" %d", ar[i]);
        }
    }
}

int main() {
    int ar[100], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("\nNow enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    print_primes(ar, n);

    return 0;
}


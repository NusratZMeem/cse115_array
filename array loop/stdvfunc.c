#include <stdio.h>
#include <math.h>

void standardDeviation(float a[], int n) {
    int i;
    float sum = 0.0, mean, std_dev = 0.0;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        std_dev += pow(a[i] - mean, 2);
    }

    std_dev = sqrt(std_dev / n);

    printf("Standard Deviation = %f\n", std_dev);
}

int main() {
    int i, n;
    float a[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    standardDeviation(a, n);

    return 0;
}


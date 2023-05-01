//Write a function that returns the number of times a value appears in an array.

#include <stdio.h>

int countSearchKey(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[100], size, key;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a value to search for: ");
    scanf("%d", &key);

    int count = countSearchKey(arr, size, key);
    printf("%d appears %d times in the array.\n", key, count);

    return 0;
}

#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Get the value of n

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);  // Get the array elements
    }

    int multiplier;
    scanf("%d", &multiplier);  // Get the number to be multiplied

    // Multiply each element of the array by the multiplier
    for (int i = 0; i < n; i++) {
        array[i] *= multiplier;
    }

    // Sort the multiplied results in descending order
    bubbleSort(array, n);

    // Print the multiplied results separated by space
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


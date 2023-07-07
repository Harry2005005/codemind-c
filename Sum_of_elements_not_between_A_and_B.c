#include <stdio.h>

int findSum(int arr[], int n, int A, int B) {
    int sum = 0;

    // Iterate over the array
    for (int i = 0; i < n; i++) {
        // Check if the element is not between A and B
        if (arr[i] < A || arr[i] > B) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int A, B;
    scanf("%d %d", &A, &B);

    int sum = findSum(arr, n, A, B);
    printf("%d
", sum);

    return 0;
}
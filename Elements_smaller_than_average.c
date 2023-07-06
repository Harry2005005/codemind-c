#include <stdio.h>

int countElementsSmallerOrEqual(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int average = sum / n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= average) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = countElementsSmallerOrEqual(arr, n);
    printf("%d", count);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;  // Length of the array
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    int average = sum / N;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] >= average) {
            count++;
        }
    }

    printf("%d
", count);

    free(arr);
    return 0;
}
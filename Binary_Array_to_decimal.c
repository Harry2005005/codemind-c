#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;  // Length of the array
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int decimalValue = 0;
    for (int i = 0; i < N; i++) {
        decimalValue = decimalValue * 2 + arr[i];
    }

    printf("%d
", decimalValue);

    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    int count;
};

float calculateAverage(struct Node* arr, int size) {
    int totalSum = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i].value == arr[i].count) {
            totalSum += arr[i].value;
            count++;
        }
    }

    if (count == 0) {
        return -1.0;
    } else {
        return (float)totalSum / count;
    }
}

int compare(const void* a, const void* b) {
    int aValue = ((struct Node*)a)->value;
    int bValue = ((struct Node*)b)->value;
    return aValue - bValue;
}

int main() {
    int N;  // Length of the array
    scanf("%d", &N);

    struct Node* arr = (struct Node*)malloc(N * sizeof(struct Node));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i].value);
        arr[i].count = 0;
    }

    qsort(arr, N, sizeof(struct Node), compare);

    int size = 1;
    arr[0].count = 1;
    for (int i = 1; i < N; i++) {
        if (arr[i].value == arr[i - 1].value) {
            arr[size - 1].count++;
        } else {
            arr[size].value = arr[i].value;
            arr[size].count = 1;
            size++;
        }
    }

    float average = calculateAverage(arr, size);
    if (average == -1.0) {
        printf("-1
");
    } else {
        printf("%.2f
", average);
    }

    free(arr);
    return 0;
}
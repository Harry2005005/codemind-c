#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;  // Length of the array
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isEvenArray = 1;
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 != 0) {
            isEvenArray = 0;
            break;
        }
    }

    if (isEvenArray) {
        printf("True
");
    } else {
        printf("False
");
    }

    free(arr);
    return 0;
}
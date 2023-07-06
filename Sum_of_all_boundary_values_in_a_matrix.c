#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;  // Row and column size of the matrix
    scanf("%d %d", &N, &M);

    int** matrixA = (int**)malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        matrixA[i] = (int*)malloc(M * sizeof(int));
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    int boundary_sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                boundary_sum += matrixA[i][j];
            }
        }
    }

    printf("%d
", boundary_sum);

    for (int i = 0; i < N; i++) {
        free(matrixA[i]);
    }
    free(matrixA);

    return 0;
}
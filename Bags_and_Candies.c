#include <stdio.h>

int calculateMinimumBags(int N, int K, int M) {
    int bags = 0;

    // Calculate the number of bags needed
    bags = (N + (K * M) - 1) / (K * M);

    return bags;
}

int main() {
    int N, K, M;
    scanf("%d %d %d", &N, &K, &M);

    int minBags = calculateMinimumBags(N, K, M);
    printf("%d
", minBags);

    return 0;
}
#include <stdio.h>

int maxHitPoints(int A, int B, int C) {
    int maxHP = 0;

    // Calculate the maximum hit points
    maxHP = A + B + C - ((A < B ? A : B) < C ? (A < B ? A : B) : C);

    return maxHP;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int maxHP = maxHitPoints(A, B, C);
    printf("%d
", maxHP);

    return 0;
}
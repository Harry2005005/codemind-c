#include <stdio.h>

int isPossibleToMeasureWeight(int W, int X, int Y, int Z) {
    if (W == X || W == Y || W == Z || W == X + Y || W == X + Z || W == Y + Z || W == X + Y + Z) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int W, X, Y, Z;
    scanf("%d %d %d %d", &W, &X, &Y, &Z);

    if (isPossibleToMeasureWeight(W, X, Y, Z)) {
        printf("YES
");
    } else {
        printf("NO
");
    }

    return 0;
}
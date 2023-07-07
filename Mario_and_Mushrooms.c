#include <stdio.h>

typedef enum {
    SMALL,
    NORMAL,
    HUGE
} MarioSize;

MarioSize findMarioSizeAfterMushrooms(int X) {
    // Initialize Mario's initial size as NORMAL
    MarioSize marioSize = NORMAL;

    // Determine Mario's size after eating mushrooms
    for (int i = 0; i < X; i++) {
        if (marioSize == SMALL) {
            marioSize = NORMAL;
        } else if (marioSize == NORMAL) {
            marioSize = HUGE;
        } else {
            marioSize = SMALL;
        }
    }

    return marioSize;
}

const char* marioSizeToString(MarioSize marioSize) {
    switch (marioSize) {
        case SMALL:
            return "SMALL";
        case NORMAL:
            return "NORMAL";
        case HUGE:
            return "HUGE";
        default:
            return "";
    }
}

int main() {
    int X;
    scanf("%d", &X);

    MarioSize marioSize = findMarioSizeAfterMushrooms(X);
    const char* marioSizeStr = marioSizeToString(marioSize);
    printf("%s
", marioSizeStr);

    return 0;
}
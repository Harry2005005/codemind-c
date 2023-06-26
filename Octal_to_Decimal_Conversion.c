#include <stdio.h>

int main() {
    char oct[100];
    scanf("%s", oct);

    int deci = 0;
    int i = 0;
    while (oct[i] != NULL) {
        int dig = oct[i] - '0';
        deci = deci * 8 + dig;
        i++;
    }

    printf("%d
", deci);

    return 0;
}
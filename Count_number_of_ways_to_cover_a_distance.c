#include <stdio.h>

int countWays(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else if (n == 3) {
        return 4;
    }
    else {
        int dp[n + 1];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for (int i = 4; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        return dp[n];
    }
}

int main() {
    int n;

    scanf("%d", &n);
    int result = countWays(n);
    printf("%d", result);
    return 0;
}
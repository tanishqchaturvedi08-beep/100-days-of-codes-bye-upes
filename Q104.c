
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;
    long long leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x;

        long long rightSum = total - leftSum + x;

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
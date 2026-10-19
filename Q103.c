
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int total = 0, leftSum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1\n");

    return 0;
}